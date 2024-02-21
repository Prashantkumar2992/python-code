package main

import "fmt"

// Functions
func mul(a1, a2 int) int {
	res := a1 * a2
	fmt.Println("Result: ", res)
	return 0
}
func show() {
	fmt.Println("Hello from Show Function")
}
func add(a1, a2 int) int {
	res := a1 + a2
	fmt.Println("Result: ", res)
	return 0
}
func main() {
	mul(23, 45)
	defer func() {
		fmt.Println("Defer1")
	}()
	defer mul(23, 56)
	show()
	fmt.Println("Start")
	defer func() {
		fmt.Println("Defer2")
	}()
	// Executes in LIFO order
	defer fmt.Println("End")
	defer add(34, 56)
	defer add(10, 10)
}
