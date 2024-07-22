package main
import "fmt"

func main(){
  var n, ci, t, total int

  fmt.Scan(&n)

  i := 0
  for i < n {
    fmt.Scan(&ci)
    total += ci
    i++
  }

  fmt.Scan(&t)

  if total == t {
    fmt.Println("Acertou")
  }else {
    fmt.Println("Errou")
  }

}
