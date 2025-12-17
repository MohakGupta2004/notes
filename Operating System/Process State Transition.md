There are 2 types of process-

- CPU Bound process
- IO Bound process

![[Pasted image 20251031004206.png]]

Let's start from the very first block which you can see is  - 
- New: When the process is ready to execute (but it's in hard drive)
- Ready: When the process is ready to execute and LTS (long term scheduler pulled it from hard drive and put it in the Ready state)
- Running: Short term scheduler put that process into running mode after which the process runs and gets terminated.
- Wait: Let's say there is an I/O bound task, CPU can't stay idle so what it does it sends the process to a queue called wait queue.
- Suspended wait: Let's say the wait queue is full, then the MTS (medium term scheduler) put that process to hard drive.
- Suspended Ready: So if we want to execute that I/O bound task again then it goes to Suspended ready (fancy way of saying the same hard drive and LTS pull). 
	 But here is a twist, what if an important process or high priority process comes into the picture then what happends? The CPU sends the CPU bound process again to Ready state but what if the Ready queue is already full then the MTS again puts that to suspended ready state.

	