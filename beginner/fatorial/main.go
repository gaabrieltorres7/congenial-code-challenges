package main
import "fmt"

func fat(n int) int{
  if n == 0 {
    return 1
  }
  return fat(n - 1) * n
}

func main(){
  var n int
  fmt.Scan(&n)
  fmt.Println(fat(n))
}