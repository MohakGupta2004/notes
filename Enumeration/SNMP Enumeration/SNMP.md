SNMP stands for Simple Network Management Protocol, it's basically for the purpose of monitoring devices in a particular network. It can monitor and change settings into an agent.

- Manager: The person who is monitoring computers.
- Agent: The computers which are monitored. (servers, switches, routers)

Every Agent has an OID(object identifier) which can be numeric. An MIB (Management Information Base) is like an documentation (like postman collections). Think of the **MIB** as the **API documentation** for network devices. It describes:
- **What data** is available.
- **What operations** can be performed (like reading or writing data).
- It's hierchical.
- **The structure** of the data (what types of data each object holds, whether it's a number, string, or a list, etc.).
- It's more like a JSON.
- OID is like an identifier of attributes. Like :  The **OID** `1.3.6.1.2.1.1.1` could return the **description of the system** (e.g., "Linux router").

![[Pasted image 20241024010221.png]]

If the host x want to connect to host y the community string(password) is simply compinfo. If that's true then it creates session and if it wasn't then it'll send the main manager an error message.  


## SNMP ENUMERATION

The thing is SNMP uses 2 passwords. One for viewing purpose and one for updating purpose. First one is public (by default) and 2nd one is private. 
- 1 is Read Only Community String which is public by default in the SNMP v1 
- 2 is the Read and write Community String which is private by default because it used for modifying purposes.
- SNMP doesn't have much security measures in v1 and v2.

```
snmp-check [target]
```

To check if there community string is public or not. If it's public we can easily get that using bruteforce.

Otherwise use `metasploit` .