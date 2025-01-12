# Fragmentation: When the disk is divided into pieces fragements occur naturally. Some programs occupy 
a certain space and remaining spaces becomes free. The free spaces are called fragmentation. A single
Unused free space in a fragment is called internal fragmentation. The completely unused space is called 
external fragmentation.

MFT: In this case we can't efficiently do the Multiprogramming because no of partitioning will be the same.
If we want to do the MFT anyway then we'll have to make sure the partitioning will be very high. 

## There are three types of algorithm:
    First fit: Scans the memroy from the beginning and assigns the first block. Doesn't care if it's big or
               it's just assigns it.
    Best fit: Scan for the smallest partition which can handle the process.
    worst fit: The memory manager finds the largest fragment for the process and assigns it to the process.

Internal Fragmentation : The collection of the free spaces in a fragment.
External Fragmentation : The collection of unallocated free space.
