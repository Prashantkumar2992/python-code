package add

import (
	"calculator/add"
	"calculator/sub"
	"fmt"
)

func main() {
	fmt.Println(add.AddTwo(3, 4))
	fmt.Println(add.AddThree(4, 5, 6))
	fmt.Println(sub.Sub(10, 5))
}
