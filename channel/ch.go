package abcd

import "fmt"

func myfunc(ch chan int) {
	fmt.Println(234 + <-ch)
}
func myfunc1(mychnl chan string) {
	for v := 0; v < 4; v++ {
		mychnl <- "CDAC ACTS"
	}
	close(mychnl)
}
func main() {
	fmt.Println("start Main method")
	// Creating a channel
	ch := make(chan int)
	go myfunc(ch)
	ch <- 23
	// Creating a channel
	c := make(chan string)
	// calling Goroutine
	go myfunc1(c)
	// When the value of ok is
	// set to true means the
	// channel is open and it
	// can send or receive data
	// When the value of ok is set to
	// false means the channel is closed
	for {
		res, ok := <-c
		if ok == false {
			fmt.Println("Channel Close ", ok)
			break
		}
		fmt.Println("Channel Open ", res, ok)
	}
	fmt.Println("End Main method")
}
