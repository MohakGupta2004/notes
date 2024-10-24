What is NetBIOS?
=> Similar to DNS but for LAN. And it's also an API which firstly developed by IBM then adapted by Microsoft.

NetBIOS ports = 139 for TCP and 137 and 138 for UDP
![[Pasted image 20241023005746.png]]

What we'll have to do is what we call NetBIOS name enumeration.

- We can do TCP session using "call" command.

## nbtstat tool

if you are in windows open nbtstat in another windows (running in vmware or virtual machine) and try to connect to my host machine using nbtstat than we can share about it.

```
	C:\Users\ethic>nbtstat -A 192.168.0.1
```
Using this command other to scan the whole network if something is sharing or not. If that's true then it'll return something like this-
```
Local Area Connection:
Node IpAddress: [192.168.0.1] Scope Id: []

           NetBIOS Remote Machine Name Table

       Name               Type         Status
    ---------------------------------------------
    WORKSTATION-B  <00>  UNIQUE      Registered
    WORKSTATION-B  <20>  UNIQUE      Registered
    ..__MSBROWSE__.<01>  GROUP       Registered
    WORKGROUP      <1E>  GROUP       Registered

MAC Address = 00-0C-29-4E-8F-45

```


## SMB

SMB = server message block.
This is a protocol for sharing resources like files, printers.
it runs on port 445 but at the time of netBIOS it used on 139. This is native in windows.
In linux you have to use `samba` for this (same as smb but linux style)

works on layer 7, Can be used over TCP/IP 445 for transport. Early times it uses NetBIOS API for File sharing purposes. Basically the protocol for giving the names is NetBIOS and the file sharing done by SMB.

So, in short:

- **NetBIOS**: Name resolution (who are you?)
- **SMB**: File and resource sharing (here’s the file/folder you asked for!)
## smbclient 

There is this tool and command 

```
smbclient -L [IP]
```

- smb enumeration using Nmap
- smb enumeration using metasploit

## smb enumeration using Nmap

```
nmap -p445 -A [IP]
```

You can use scripts 

```
	ls /usr/share/nmap/scripts | grep smb
```

You can use it in nmap

```
nmap --script=smb.enum.users 192.168.0.1
```

