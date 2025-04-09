# API Testing 101

### 🧠 Introduction
API testing is basically a way to test APIs (WOW GENIUS, NOBODY KNEW THAT UNTIL YOU SAID IT).  
Yeah, I know. But seriously, API testing covers a **wide variety** of test cases and potential **attack surfaces**.  
We’re going to dive into some of that today.

---

### 🔍 Finding the Documentation
The frontend and backend developers used to talk in the language of APIs — **until the company went broke** and now one full stack dev does it all.  
Cut the BS — **your job** is to find the documentation to understand how the API works.

Some juicy endpoints to start digging into:
- `/api`
- `/api/v1`
- `/api/v1/swagger`  
(Sometimes developers just *leave Swagger docs wide open*, because why not leak internal API specs to the whole internet?)

---

### 🔁 Trying Different HTTP Methods on a Single Endpoint
So, you found an endpoint in the network tab or via a recon tool. Great. Now:

- Send a `GET` request ✅  
- Send a `POST` request ❓  
- Try a `PATCH`, maybe a `PUT`, even a `DELETE` 🔥

You never know which one might be enabled (and forgotten by devs), exposing unexpected functionality.  
This alone can lead to fun stuff like:
- Accessing data you shouldn’t see
- Updating values without auth
- Deleting... stuff (oops)

---

### 🚨 Mass Assignment Vulnerabilities
Ah yes, the good ol’ **mass assignment**.

This happens when the backend *blindly trusts* whatever fields you send — kind of like giving your house keys to a stranger because they asked nicely.

**Example flow:**
- You find an endpoint, say `/api/user`
- It's supposed to let you update your profile with `POST`
- You try adding extra fields like `"isAdmin": true` or `"role": "superuser"` in your request body  
- And boom... it works  
  (Congrats, you’re now the CEO.)

This is because the backend didn’t **whitelist** allowed fields — it just updated **everything** you sent.

This vulnerability often leads to:
- Privilege escalation
- Unauthorized access
- Account hijacking
