#include <iostream>
using namespace std;

int main()
{
  int lines, colunms, pokemonTypeToTake, acc = 0;
  cin >> lines >> colunms;

  int pokemonTypes[lines][colunms];

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < colunms; j++)
    {
      cin >> pokemonTypes[i][j];
    }
  }

  cin >> pokemonTypeToTake;

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < colunms; j++)
    {
      if (pokemonTypes[i][j] == pokemonTypeToTake)
        acc++;
    }
  }

  cout << "Ash pegou " << acc << " pokemon" << endl;

  return 0;
}