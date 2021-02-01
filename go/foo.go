// Use `go run foo.go` to run your program

package main

import (
	. "fmt"
	"runtime"
	"time"
)

var i = 0

func incrementing() {
	for inc := 0; inc < 1000000; inc++ {
		i++
	}
}

func decrementing() {
	for inc := 0; inc < 1000000; inc++ {
		i--
	}
}

func main() {
	runtime.GOMAXPROCS(runtime.NumCPU()) // I guess this is a hint to what GOMAXPROCS does...
	// Try doing the exercise both with and without it!
	go incrementing()
	go decrementing()
	
	// TODO: Spawn both functions as goroutines

	// We have no way to wait for the completion of a goroutine (without additional syncronization of some sort)
	// We'll come back to using channels in Exercise 2. For now: Sleep.
	time.Sleep(500 * time.Millisecond)
	
	Println("The magic number is:", i)
}
