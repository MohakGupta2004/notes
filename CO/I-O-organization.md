Three I/O ways: 
1. ports
2. Bus
3. Controller


Data transfer:
    1. Serial transmission: sending data one by one.
    2. Parallel transmission: sending multiple data at a time.

Under data transfer there are few ways we can divide sending data basically
means how smooth it goes.
    1. Synchronus transmission: sending a data through a bus where the sender
and the receiver both are connected with the same clock. The clock has a Time 
of T before sending the data then sender sends the data let's say the bus takes
t time to send it then the receiver will going to Synchronise with the clock 
in the end it receives the data at t+T time.

    2. Asynchronus transmission: In Asynchronus it sends a extra line which 
gave an alert to both sender and the receiver that they want to share data 
between each other. 
        Asynchronus has 2 types = 
            A. Strobe Control: Strobe line is way to alert each other that they 
wants to send data. Sender strobe line when sender send the data. Requesting 
strobe line when receiver wants some data so it's requesting one using strobe.
            
            B. Handshaking: When sending data through strobe it doesnot check 
if the receiver really wants that data or not. So using handshaking technique
both the receiver and the sender can know that they wants to send the data.
Sender sends a  sending data request the receiver makes a "ready to receiver"
line and then commmunication proceeds.

Polling: 
    When a handshaking procedure is applied then as a receiver would have to 
always check whether the sender made the sending data line high or not. In 
most of the case if the system is very powerful it doesn't create much of an
issue but when it comes to systems not as good then they create waiting time
or sometimes deadlock. So from this we moved on to Interrupt based approach.

Interrupt:
    Whenever a programs want to send data then it raises an interrupt which
goes to the Interrupt request line. Whenever CPU sense that this line is 
busy then CPU quickly stores the current process in a context saving then 
goes to the ISR or Interrupt service routine where it completes the job and
from the context restart the previous hold process.
    A. vectored interrupt: where the interrupt provides an address or ISR where
the interrupt was happend.
    B. non vectored: where they don't

    Interrupt can be chained means the OS can store the base memory as ISR and 
the interrupt are stored. Searching is optimised in this case.
    Also Interrupt can be prioritized. If 2 or more interrupt raised at the 
same time, they will be serviced according to there order.

# Maskable Interrupt: Interrupts that can be ignored for later execution.
# Non-Maskable Interrupt: which shouldn't be ignored. ex: memory corruption.
