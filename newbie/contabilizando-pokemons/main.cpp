#include <iostream>
using namespace std;

int main()
{
  int qtyPokemon[3], qtyPokemonPerRegion[3];

  for (int i = 0; i < 3; i++)
  {
    cin >> qtyPokemon[i];
  }

  for (int i = 0; i < 3; i++)
  {
    cin >> qtyPokemonPerRegion[i];
  }

  for (int i = 0; i < 3; i++)
  {
    qtyPokemon[i] += qtyPokemonPerRegion[i];
    cout << qtyPokemon[i] << " ";
  }

  return 0;
}