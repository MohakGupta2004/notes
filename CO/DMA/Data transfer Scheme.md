# Data Transfer Scheme

Data transfer scheme refers to the systematic method in which data moves between CPU, I/O, memory. Moddha kotha data flow 
between everything.


## Programmed Data transfer Scheme

Data transfer between CPU and I/O or CPU and Memory.
 1. This thingy is controlled by CPU.
 2. This thingy is taken place by the program written in the memory.
 3. programs are executed when I/O wants a data transfer.
 4. For small data.

Types of  PDTS: 
#### Synchronus Data transfer scheme
    This kind of data transfer is mostly used for data transfer between processor and another device where speed is nearly
    the same.
    
    1. we don't use this for CPU<->I/O but mostly for CPU<->Memory (mostly cache memory)
    2. Synchronus means at the same time.

#### Asynchronus Data transfer scheme
    This kind of data transfer only happens when the speed doesn't match means mostly with CPU<->I/O.
    
    1. The processor constantly checks if I/O device is ready or not (if CPU speed is 100 and I/O speed is 40 then it constantly
    creates loop and check if it's ready or not).
    2. The looping wastes CPU cycles.
    3. When I/O is ready the transfer takes place.

#### Interrupt Data transfer scheme
    This kind of data transfer is similar to Asynchronus Data transfer. It takes place where the data speed don't match.
    CPU <-> I/O
    1. Instead of looping, the CPU starts the main program and I/O sends an interrupt to the processor.
    2. processor stops the current running process and push the returning address on the stack.
    3. Program counter jumps to ISR(Interrupt Service routine) and execute the corresponding ISR.
    4. The execution is nothing but the data transfer. 
    5. If the data transfer end then the returning address (which was pushed into the stack) pop from the stack and load on the 
    program coutner.

## DMA (Direct Memory Access)
    Direct Memory Access is a way to communicate between I/O devices and memory without involving the CPU.
    It works with a DMA controller. Which acts as a bridge.

    1. When a I/O device wants to communicate it sends a HOLD signal to DMA controller. 
    2. The DMAC checks whether CPU is working or not.
    3. if no other I/O is using the bus then DMAC sends the HOLD signal to CPU to take control of the Bus.
    4. When HOLD is received, the CPU gives up the control of the bus after the machine cycle has been completed.
    5. CPU sends acknowledgement to DMAC. 
    6. After received the acknowledgement DMAC gives the control to share data between I/O and memory. 
    7. When data transfer completes, it sends a signal to DMA controller that the data transfer is complete and CPU takes back
    the control of the bus.

#### Burst mode DMA data transfer scheme
    Burst mode is a transfer mode where a large block of data is transfer caused the CPU to prevent accessing the bus. CPU is 
    temporarily blocked for this. (Age hoto jokhon 10 gb er movie transfer kortam but computer slow hoe jeto).
    This technique is generally used on magnetic disks.

#### Cycle Stealing data transfer scheme
    In this the usual process goes on of DMA handshakes but after a certain time the CPU takes back the control and then the 
    DMA controller momentarily "steals" control of the system bus from the CPU to tranfer small amount of data at a time. 
    after each transfer the bus control is returned to CPU.
