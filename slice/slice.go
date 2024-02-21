package main

import "fmt"

func main() {
	var n [10]int /* n is an array of 10 integers */
	var i, j int
	/* initialize elements of array n to 0 */
	for i = 0; i < 10; i++ {
		n[i] = i + 100 /* set element at location i to i + 100 */
	}
	/* output each array element's value */
	for j = 0; j < 10; j++ {
		fmt.Printf("Element[%d] = %d\n", j, n[j])
	}
	// nil slice
	var numbers []int
	fmt.Printf("len=%d cap=%d slice=%v\n", len(numbers), cap(numbers),
		numbers)
	var numbers1 = make([]int, 3, 5)
	fmt.Printf("len=%d cap=%d slice=%v\n", len(numbers1), cap(numbers1),
		numbers)
	odd := [6]int{2, 4, 6, 8, 10, 12}
	var s []int = odd[1:4]
	fmt.Println(s)
}
