## Virtual Memory: Virtual Memory is a type of memory which provides an illusion to the programmer that the
computer has a lot of memory.

## Need: Virtual Memory creates an Illusion to have a lot of Memory but it internally does something else.
When a user wants to execute a program bigger than the memory then the concept of Virtual Memory comes
into the picture.

## Implementation: VM is a memory management technique by which an OS that uses hardware can implement this
process. It temporarily swaps the data of the physical memory (ram) to a disk storage like hardware. It 
transfers the data to hardware and then swaps back to physical memory when needed. The idea of VM is to 
use the part of program in memory which is currently in use. 

## How the VM is implemented:
[Give a picture of HDD and Main memory swaps]

For windows: it mostly a file which implements the VM which is named as Pagefile.sys
For Linux: it mostly a partition which uses virtual memory

## The size of Virtual Memory determination:

    -> The addressing scheme of VM depends on the computer system(32-bit of 64-bit CPU)
    -> The amount of secondary storage available.

## Virtual, Physical and Disk Address
![Virtual memory to physical address translation]('virtual-physical-disk-transition.png')

Virtual or Logical address: Logical Addresses are used by programmers. Set of virtual addresses
is called address space or virtual memory. Address in a main memory called the physical address. 
The set of physical address is called memory space. These physical addresses are stored in MAR.
Memory Address Register.
Physical Memory: It's the memory of the CPU or main memory.

CPU access virtual memory to know where to get the data from which eventually translated to 
physical address by mapping table.

('memory-table-mapping.png')

Two types of Virtual Memory management techniques:
    1. Paging
    2. Segmentation
