#### Pre-emptive
- SRTF (Shortest Remaining time first)
- LRTF (Longest Remaining time first)
- Round Robin **
- Priority Based
#### Non pre-emptive
- FCFS (First come first serve)
- SJF (shortest job first)
- LJF (Longest job first)
- Multi Level Queue

#### Important bits to understand 
- **Arrival Time**: When a process enters the ready queue or the stack.
- **Burst Time**: Time the CPU takes to execute the process.
- **Completion Time**: The time the process takes to complete it's execution.
- **Turn around time**: (completion time-arrival time)
- **Waiting Time**: (turn around time - burst time)
- **Response Time**: (the time when CPU just start to execute the process - arrival time)



## FCFS
Funda is we'll going to add the processes based on the arrival time.
![[Pasted image 20251030235606.png]]

GNATT CHART = Basically a chart means where the Arrival time is the timing of the process and the duration of the work is of the burst time. 
![[Pasted image 20251031000222.png]]
![[Pasted image 20251031001853.png]]
