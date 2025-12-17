It basically refers to the fact more of turn variable but with the concept of priority. If p0 is working and p0 has a priority of 1 and p1 comes with a priority of 10 then the p0 has to change the lock variable to false. As p1 has more priority. 

#### Spin lock
As p0 has to change the lock variable's value but it couldn't because to do that it has to end that program, But p0 process has switched to p1 as because p1 has more priority but then it couldn't execute as the lock variable is still true there. This is called the spin lock situation.