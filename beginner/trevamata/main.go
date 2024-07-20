package main
import "fmt"

func main(){
  var (
    friendsQty int
    name string
    weight int
    totalCapacity int
    total int
  )

  fmt.Scan(&friendsQty)

  i := 0
  for i < friendsQty {
    fmt.Scan(&name)
    fmt.Scan(&weight)
    total += weight
    i++
	}

  fmt.Scan(&totalCapacity)

  if total > totalCapacity {
    fmt.Println("Vamos virar almoço de aranhas gigantes!")
  } else {
    fmt.Println("Vamos todos encontrar a montanha!")
  }

}
