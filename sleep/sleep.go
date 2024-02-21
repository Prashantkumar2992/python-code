package main

import (
	"fmt"
	"time"
)

func display(str string) {
	for w := 0; w < 6; w++ {
		time.Sleep(1 * time.Second)
		fmt.Printf(str)

	}
}
func main() {
	//calling Goroutine
	go display("Hello")
	//calling normal function
	display(" to \n")
}
