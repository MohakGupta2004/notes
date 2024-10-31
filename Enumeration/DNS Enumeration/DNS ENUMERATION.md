#### NSLOOKUP
nslookup for getting more information about name server (the servers which translates the domain name to ip addr)

```
nslookup
>set type=a
>tryhackme.com
{values will be here}
```

or you can directly write it in shell 
```
nslookup -type=A tryhackme.com
```

You can set the server as a nameserver of a web app and then 
```
> server nsztm2.digi.ninja [nameserver]
> set type=any
> ls -d [actual website name]
```
