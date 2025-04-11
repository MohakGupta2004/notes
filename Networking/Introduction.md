## Why Networking?
 Because it's interesting and important and tbh as software engineer or a hacker you need to know about networking because it's basically Humanities one of the greatest creations.
## What are the topics which we'll going to learn?
- Application Layer (http, web, email, DNS etc)
- Encryption (TLS/SSL)
- Reliable connections (tcp)
- Routing (IP) and Network control (BGP)
- Physical connections (Ethernet)
## How does the Internet work?
- What are the steps which are involved when using internet?
- How the process is different on the phone?
- What's the difference between WWW and Internet?

## What is the Internet?
- A network of billions hosts and end systems. (Basically computer devices)
- Each device has a unique, numeric called IP
- Connected with wire, optic, or radio.
- Hosts send data packets to other hosts
- Packets are labeled with IP address of sender and receiver
- Routers and switches direct traffic using addresses on the packets.


![[Pasted image 20250325134409.png]]



## Who invented Internet?
The internet term grew from the word ARPANET, A US miliatary funded academic project.

## Who controls the Internet?
- Internet Society
-  ICANN (Internet Corporation for Assigned Names and Numbers)
   - Assign IP addresses and DNS top level domains (13 root DNS)
-  IETF (Internet Engineering Task Force)
   - Develops protocols that define how Internet devices interact.
   - RFCs (Request For Comments) are its documents defining Internet standards.

## The Internet != The Web
- The Internet is a worldwide network of interconnected computers.
- The Web is a worldwide network of interconnected hypertext pages.
	- Web browser app connects to web server apps
	- Web is just one of many applications built on top of the Internet and DNS.
	- Uses HTTP protocol (first version, 0.9, was released in 1991)
	- Invented at CERN on the France/Switzerland border.
-  Apart from the Web, many other applications use the Internet
	- Email, SSH, BitTorrent, Voice-over-IP telephony, FTP, Remote Desktop, VNC, Skype, Telnet, Snapchat, FaceTime, Netflix … you name it!
	- Any smartphone app that communicate with a backend service

## The Internet is distributed and loosely coupled
• No one entity is manages all the hosts, routers, and links on the Internet.
• Hosts join by building a physical connection to an existing host.
• Hardware and software come from many different vendors.
• Standard Internet protocols define how devices should interoperate.
• A network protocol defines proper communication patterns between
devices:
	• types of messages that can be sent,
	• structure of the messages (bit-level representation),
	• possible responses and actions to take.
• Clearly-defined protocols allow us to create new devices that are compatible
with the existing ones, and thus expand the Internet ad-hoc.

## The internet in Practice
• All machines on the Internet can send and receive messages, but there are two distinct categories of participants:
• Network edge:
	• Hosts: clients and servers
	• Have only one link to the Internet
• Network core:
	• Routers connecting various Internet parts
	• These are like hosts with multiple links and living only to relay others’ packets.
Machines are connected by physical media:
	• Wired and wireless communication links

## Access Network and LAN
• Many different technologies are used to connect devices at the edge
• WiFi, Ethernet, Cellular
• Speed varies depending on the link technology
• Links may be shared or dedicated
• Some access networks assign public IP addresses to hosts, and others use private IP addresses and network address translation (NAT).


## Miscellaneous 
- Twisted pair cables, fibre optic cables. - Guided Medium
-  Radio - unguided medium

## Circuit Switching and Packet Switching
- "Switching" here means the way a link is shared by competing users.
- Packet benefits:
	• Simpler:
	• No connection setup is necessary.
	• Just address packet correctly and send it.
	• Sender need not know full path to endpoint, just the "next hop."
	• Very efficient for sharing “bursty” customers.
- Circuit Switching:
	• Guaranteed performance.
	• Very effective for applications requiring constant, steady transfer (streaming audio and video).

## Network performance metrics 
- Throughput – is the rate of data transfer. (a.k.a. bandwidth)
- Latency - is the delay of an action. Network latency is the time it takes for a bit of data to arrive at the destination.

## Quick practicals
- curl ifconfig.me -s => gives you your ISP Ip

## IP address 101
![[Screenshot From 2025-03-26 03-42-19.png]]

## Ports
- I know now which device to send the data but I still didn't know which application to send the data. Here comes the the concept of port.