
Small parts of bigger networks. 

192.168.250.0/24

here network bits = 24
host bits = 8 

because  11111111.11111111.11111111.00000000
				Network bits             host bits

Find subnet mask?

Q1. Subnets required - 4
	 Hosts required - 50
=>
	2^8 = 256
	2^7 = 128
	2^6 = 64
	2^5 = 32
	2^4 = 16
	2^3 = 8
	2^2 = 4
	2^1 = 2

The hosts comes under 2^6 category.
So then what we need to do we have to count the host bits from right to left and then when the number comes up (here 6) we'll have to change the rest of it to 1. This is mota mota we call it Prefix Notation.

Basically here,
11111111.11111111.11111111.11000000

Network bits = 26 (1's)
Host bits =  6 (0's  which is also called off)
new bits = 2
Subnetworks = 2^2 = 4
Hosts = 2^6 = 64 -2 = 62 (valid hosts)

Q2. Subnetworks required = 25
		 Hosts required = 5
		 Can we make that using class C IP?
=> 5 hosts comes under 2^3 category. The "3" is called Off-bits.
	Total hosts = 2^ off bits = 8
	valid hosts = 8-2 = 6 (First one will be network id and the last one will be brodcast Id. 192.168.250.0 is nw id, 192.160.258.255 is brodcast).

So the binary representaition would be:
11111111.11111111.11111111.11111000
Network bits = 5+24= 29
Host bits = 3
new bits = 5

subnetworks = 2 ^ 5 (2 ^ no of new bits) = 32
hosts = 2^3 = 8 -2 = 6 

Ans: yes this matches the requirements.