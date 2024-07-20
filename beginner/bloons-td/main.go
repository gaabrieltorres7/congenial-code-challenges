package main
import "fmt"

func main() {
	var t, n int
	const TOTALDAMAGE = 28000

	fmt.Scan(&t)
	fmt.Scan(&n)

	damagePerS := make([]int, n)
	total := 0

	for i := 0; i < n; i++ {
		fmt.Scan(&damagePerS[i])
		total += damagePerS[i]
	}

	totalDamagePossible := total * t

	if totalDamagePossible >= TOTALDAMAGE {
		fmt.Println("Macacos venceram!")
	} else {
		fmt.Println("O BAD venceu!")
	}
  
}