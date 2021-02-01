Exercise 1 - Theory questions
-----------------------------
 
 ### What is the difference between concurrency and parallelism?
 > Concurrency is when several tasks run in a time interval where they are overlapping, but not neccessarily at the exact same time. One task/process run for some time, then another process runs while the first process it not yet done, and so on, so it seems like they run in parallell for the user. Parallellism is when tasks actually run in parallell. with parallellism we can have both concurrent tasks and sequential tasks running, but with concurrency we can't have sequential tasks running with concurrent tasks. 
 
 
 ### Why have machines become increasingly multicore in the past decade?
 > To answer this, I must first explain what a multicore machine is. A core here just means a CPU, so a multicore machine is a machine that has one CPU, but makes it seem like it has several by making it seem like it is running more threads at once. This is probably the reason, because when things run in parallell they can run faster.
 
 ### Why do we divide software (programs) into concurrently executing parts (like threads or processes)?
 (Or phrased differently: What problems do concurrency help in solving?)
 > We divide SW programs into concurrently executing parts to make it go faster. For instance, if you plug in your USB and want to open a file, it will take a while to open. If the computer can't do anything else than wait for the file to open, it would be a waste of time and computercycles. With concurrent programming it can use its cycles more effectively, and still open the file when it is ready while doing other things in the meanwhile. People do a lot of different things on their computer at once, and only being able to work on one thing would be inefficient. It also leads to you getting the feeling of concurrent processes running on a computer without having to add HW. 
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > In some way it probably makes it easier because different programs can be executed at the same time-interval. However, it seems from task 4 like it is easy to make a mistake and cause files to run at the same time, for instance if two functions want to change the same global variable. So it probably makes a programmers life harder because it is important to keep track of what she/he is doing, and it needs some more code. 
 
 ### What is the conceptual difference between threads and processes?
 > A process is a container of threads, and unlike threads they don't share memory between them. A thread is a collection of data, the smallest unit of execution in a computer program. It tells if the task is ready to run, what priority it has if that is important, and where in the memory it is. A thread is a stack, register and instruction pointer together. They are actually "running" things. But threads can cause race conditions, so be aware! Threads and processess are not so different, and in LINUX both are called called tasks. 
 
 ### Some languages support "fibers" (sometimes called "green threads") or "coroutines"? What are they?
 > A fiber is like a thread, but it is not scheduled by the kernel, rather by a Virtual Machine (a system that functions like a computer, but is not a physical compter). It can work like a thread, but cannot work with more than one CPU  (it can work with more CPUs, but only on one of them). It can be used to make it feel like more processes run at the same time with only one CPU. A coroutine is kind of like an 
 
 ### What is the Go-language's "goroutine"? A C/POSIX "pthread"?
 > goroutine is a routine making concurrency possible in Golang, using relatively little space. One uses the command "go" to call a goroutine. The goroutines can be shared by more threads, and are found at the compiler level. C/POSIX also gives a way to do concurrent programming. Pthread is short for POSIX thread.
 
 ### In Go, what does `func GOMAXPROCS(n int) int` change? 
 > GOMAXPROCS(n int) int changes the maximum number of CPUs that can run at the same time to the number n, if n is an int bigger than or equal to 1. 



 
 
 
 
