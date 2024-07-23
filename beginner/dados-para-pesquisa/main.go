package main
import "fmt"

func main(){
  var N, Q, R int
  fmt.Scan(&N, &Q)

  counts := make([]int, N)

  for i := 0; i < Q; i++ {
    fmt.Scan(&R)
    counts[R % N]++
  }

  fmt.Printf("Mod %v\n", N)
  for k, v := range counts {
    fmt.Printf("%v: %v\n", k, v)
  }

}
