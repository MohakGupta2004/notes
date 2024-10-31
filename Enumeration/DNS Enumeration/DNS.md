DNS stands for Domain Name System gives names to an ip address of an website.

#### TLD
Top Level Domain basically means the ".com", ".org", ".edu" part which gives the domain some purpose.

##### Second Level Domain
The name part other than the ".com" means if the "example.com" if you take it as an example then "example" is second level domain. You can create 63 character big subdomain and 253 char SLD.


### DNS RECORD TYPES (Types of DNS server mostly)

##### A record
This record stores every Ipv4 value
###### AAAA record
This record stores every ipv6 value

###### CNAME record
This record stores the redirect value means if there is a website called blog.example.com and it listed in the DNS record that it's a CNAME record then if we ping blog.example.com it'll automatically return the example.com as a output.

###### MX record
This record stores emails and sometimes act as a Backup mail server

###### TXT record
This record stores every text data but mostly used for listing autheticated requests to avoid spams.

### DNS Request Process

You hit Google.com => It searches for the cache of your browser first, if it's there that means it'll return google.com but if it's not then =>it'll do a recursive DNS Server Request which  is provided by your ISP=> it'll search in the root DNS server (Universal server) =>The root DNS server gives you the TLD (.com) then redirects you to that server => TLD has the data where authoratative servers (name servers) make request and get data => The response sent back to the Recursive DNS server and cached it => It has a expiry time.


#### DNS zone

DNS has different zones for every area which stores the value of the domain for that particular region. Basically like if I'm in India there will be a Mumbai server or something like that (hypothetical). It manages by a specific Organization. 

###### DNS zone file
DNS zone file is a plain text file which stores inside the DNS server which represents all the information about the zone domains. Zone file always starts with SOA (start of authority)(a table in which all the info of the domain is writted). 

###### DNS Zone transfer
There are 2 different DNS servers in a particular zone. 1. is a primary DNS and 2. is a backup DNS server copy of the primary one. The value of a newly created domain always stored in the primary domain and it mostly updated but whenever it creates a new registry the info about the newly created domain also transfer to the backup DNS server.



**The catch: You have to pretend the secondary server and have the get the primary server details**


There is 2 types of DNS zone transfer =>1. AXFR (asynchronus full transfer) which is unprotected
								2. IXFR (Incremental transfer)