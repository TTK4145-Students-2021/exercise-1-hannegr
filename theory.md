Exercise 1 - Theory questions
-----------------------------
 
 ### What is the difference between concurrency and parallelism?
 > Concurrency is when several tasks run not exactly at the same time, but they run in a time interval where they are overlapping. One task/process run for some time, then another process runs and so on, so it seems like they run in parallell for the user. Parallellism is when tasks actually run in parallell. 
 
 
 ### Why have machines become increasingly multicore in the past decade?
 > To answer this, I must first explain what a multicore machine is. A core here just means a CPU, so a multicore machine is a machine that has one CPU, but makes it seem like it has several by making it seem like it is running more threads at once. This is probably the reason, because when things run in parallell they can run faster. 
 
 ### Why do we divide software (programs) into concurrently executing parts (like threads or processes)?
 (Or phrased differently: What problems do concurrency help in solving?)
 > We divide SW programs into concurrently executing parts to make it go faster. For instance, if you plug in your USB and want to open a file, it will take a while to open. If the computer can't do anything else than wait for the file to open, it would be a waste of time and computercycles. With concurrent programming it can use its cycles more effectively, and still open the file when it is ready while doing other things in the meanwhile. People do a lot of different things on their computer at once, and only being able to work on one thing would be lame.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > *Your answer here*
 
 ### What is the conceptual difference between threads and processes?
 > A process is a container of threads, and unlike threads they don't share memory between them. A thread is a collection of data, the smallest unit of execution in a computer program. It tells if the task is ready to run, what priority it has if that is important, and where in the memory it is. 
 
 ### Some languages support "fibers" (sometimes called "green threads") or "coroutines"? What are they?
 > A fiber is like a thread, but it is not scheduled by the kernel. This will say that they are rather scheduled by a virtual machine. 
 
 ### What is the Go-language's "goroutine"? A C/POSIX "pthread"?
 > goroutine is a concurrent thing I think. This allows for concurrency in the program. C/POSIX also gives a way to do concurrent programming. A pthread is C's answer to a fiber I think. 
 
 ### In Go, what does `func GOMAXPROCS(n int) int` change? 
 > *Your answer here*



 
 
 
 
