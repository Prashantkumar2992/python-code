package main

import "fmt"

func findSquare(num int) int {
	square := num * num
	return square
}

func main() {
	func() {
		fmt.Println("Welcome to CDAC ACTS!")
	}()
	// Assigning an anonymous
	// function to a variable
	value := func() {
		fmt.Println("Welcome to CDAC ACTS!")
	}
	value()
	// anonymous function with arguments
	var sum = func(n1, n2 int) {
		sum := n1 + n2
		fmt.Println("Sum is:", sum)
	}
	sum(5, 3)
	// return value from an anonymous function
	var sum1 = func(n1, n2 int) int {
		sum1 := n1 + n2
		return sum1
	}
	result := sum1(5, 3)
	fmt.Println("Sum is:", result)
	area := func(length, breadth int) int {
		return length * breadth
	}
	fmt.Println("The area of rectangle is", area(3, 4))
	// Anonymous function as an arguement to another function
	sum2 := func(number1 int, number2 int) int {
		return number1 + number2
	}
	result1 := findSquare(sum2(6, 9))
	fmt.Println("Result is:", result1)
}
