There are 2 type of process one is independent and another is co-operative process. Now if we want to understand more of it we have to go to critical section. What is critical section? That section of instruction where there is a possibility of shared resources.
	So we need some synchronization mechanism in order to make it work 
and there are certain conditions for it.

conditions are : 
	 #### primary
	1. Mutual exclusion.
	2. Progproducerress.
	 #### Secondary
	3. Bounded wait.
	4. No assumption related to hardware speed.

### Mutual exclusion
If one process is working on a shared resource and another process is trying to access the resource but couldn't because one process can use a resource at a time. This prevents race condition.

#### Progress
If one process doesn't let another process use the resource then it's a blockage for process synchronization.

#### Bound wait
What if one process couldn't able to get the resource for some reason and it couldn't able to get one. So that's a blockage for process synchronization.

#### No dependency on hardware
The algorithm should be hardware independent.


## Algorithms

### Lock variable
Lock variable is just a flag or a variable with a boolean value which helps to identify if a process which is using shared resources are occupied or not. If it's true other processes can't use that shared resource. After execute the process turns the lock variable false so that other processes can use that too.

### Turn variable
This thing runs on user mode. Basically giving priority to processes but more of with a variable. If the turn variable is 0 then the process with a turn variable value of 0 will going to execute and use the shared resources. If p1 has turn variable value of 1 then it'll can't use the value of shared resources. When p0 finished executing it'll set the turn value to 1 then the p1 will going to execute.