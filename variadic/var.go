package main

import (
	"fmt"
	"strings"
)

// Variadic function to join strings
func joinstr(elements ...string) string {
	return strings.Join(elements, "-")
}

// Variadic function to return sum of integers
func sum(nums ...int) {
	fmt.Print(nums, " ")
	total := 0
	for _, num := range nums {
		total += num
	}
	fmt.Println(total)
}
func main() {
	// pass a slice in variadic function
	elements := []string{"CDAC", "ACTS", "DHPCAP"}
	fmt.Println(joinstr(elements...))
	fmt.Println(joinstr("CDAC", "ACTS", "DHPCAP"))
	sum(4, 5, 6)
	sum(4, 5, 6, 7, 8, 9)
}
