# 🛠️ Server-Side Parameter Pollution (SSPP)

---

### 🧩 What is SSPP?

Server-Side Parameter Pollution (SSPP) is a vulnerability that occurs when you include **duplicate or specially crafted parameters** in an HTTP request, leading to **unexpected behavior in internal APIs**.

This often happens when:

- The external API forwards parameters to **internal services**.
- You send the **same query parameter twice**.
- The **server logic conflicts** due to duplicate or injected parameters.

These behaviors suggest the existence of SSPP vulnerabilities.

---

### 🔬 How to Test?

To test for SSPP, you can inject special characters or duplicate parameters into the query string and observe how the server reacts.

#### ✅ Things to Try:

1. **Inject `#`, `&`, `=` characters**  
   Observe if the query is truncated or interpreted unexpectedly.

2. **Send duplicate parameters**  
   Check how the server chooses between them.

---

### 🔪 Truncating Query Strings

Use a **URL-encoded `#`** (`%23`) to try and **truncate** the internal request:

```http
GET /userSearch?name=peter%23foo&back=/home
```

Server might interpret this as:

```http
GET /userSearch?name=peter#foo&publicProfile=true
```

Here, anything after `#` is invisible to the server.

Example:

```http
/profile?user=admin#role=admin
```

- `role=admin` is **client-side only**, not visible to the server.
- Only exploitable if client-side JavaScript forwards the fragment to the server.

---

### 💣 Injecting Invalid Parameters

Use a **URL-encoded `&`** (`%26`) to try to **inject new parameters**:

```http
GET /userSearch?name=peter%26foo=xyz&back=/home
```

Attempts to create:
```http
GET /userSearch?name=peter&foo=xyz&back=/home
```

---

### 🎯 Injecting Valid Parameters

Try to inject **actual valid parameters** into the internal request:

```http
GET /userSearch?name=peter%26email=foo&back=/home
```

Which might get parsed as:

```http
GET /userSearch?name=peter&email=foo&back=/home
```

---

### 🔄 Overriding Existing Parameters

You can try **sending the same parameter name twice**:

```http
GET /userSearch?name=peter%26name=carlos&back=/home
```

Which might forward internally as:

```http
GET /users/search?name=peter&name=carlos&publicProfile=true
```

Different technologies handle this differently:

| Tech Stack      | Behavior                            |
|----------------|-------------------------------------|
| **PHP**        | Takes the **last** parameter (`carlos`) |
| **ASP.NET**    | Merges both → `peter,carlos`         |
| **Node.js/Express** | Takes the **first** (`peter`)         |

---

### 🎯 Exploitation Ideas

If overriding works, try:

```http
GET /login?user=guest&user=admin
```

Or:

```http
GET /profile?role=user&role=admin
```

Might allow privilege escalation, logic bypass, or user impersonation.

