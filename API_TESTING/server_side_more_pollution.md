# 🧪 More Server-Side Testing

Server-side parameter pollution can be triggered in various ways. But to understand these attacks properly, it's important to first understand **server-side encoding** and **path handling** behaviors.

---

## 🔐 Extra Parameter Encoding

Let’s say you’re making a `POST` request to update a username at an API endpoint:

```http
POST /update/username 
{
    "username": "Mohak"
}
```

But what if you send **extra unexpected parameters**?

```http
POST /update/username
{
    "username": "Mohak",
    "role": "admin"
}
```

Or even encode it sneakily:

```http
POST /update/username
{
    "username": "Mohak\,\"role\": \"admin\""
}
```

If the backend doesn’t **validate or sanitize** inputs strictly, it might process the second parameter (`role: admin`) or misinterpret the structure — leading to privilege escalation or injection-based attacks.

---

## 🧼 What is Path Normalization?

**Normalization** is the process of **cleaning up a path** to remove unnecessary or dangerous parts like:

- `.` → current directory  
- `..` → parent directory  

For example, if the backend makes a call like this:

```
/api/private/users/peter/../admin
```

The server internally **normalizes** it to:

```
/api/private/users/admin
```

This means an attacker could manipulate parameters to climb directories and potentially **access other users' data**.

---

## 🤔 Why Does It Matter?

If user input is used to build backend REST paths, and the backend **normalizes the path after**, attackers can:

- Inject `../` or encoded variants like `%2e%2e%2f`
- Bypass auth checks
- Access unauthorized routes or resources

---

## 📁 Think of it Like Folders

You're in a folder:

```
/home/api/private/users/peter
```

Now you move to:

```
/home/api/private/users/peter/../admin
```

That simplifies to:

```
/home/api/private/users/admin
```

It’s like taking a step into a folder, then one step back, and then into a different folder.

---

## 🛡️ How to Prevent It

Use **parameter filtering and input validation**.

If you're using **Node.js**, go for:

- ✅ [`Zod`](https://zod.dev/) (recommended)
- ✅ [`express-validator`](https://express-validator.github.io/)
- ❌ Manual validation (possible, but not ideal)

Make sure to validate:
- Types
- Formats
- Unexpected keys
- Path manipulations


