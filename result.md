So what happened here? 
> In the go-program we used the goroutines to make a concurrent program. 
Here both routines ran in the same interval, using the same global variable, so due to concurrency they made changes on the 
variable in that same time interval. That no go-channel fixed the communication between the two goroutines then led to race conditions. This caused unwanted behaviour, and is a good example of a bad concurrent program. 

> In the c-program two threads were first defined, one for the incrementation and one for the decrementation of the global variable i. 
Then pthread_create was called, which caused these two threads to run concurrently, and the same thing that happened in 
the go-program happened in this program. The pthread_join function made main run until both threads were finished, and then we 
got our random magic number. 
