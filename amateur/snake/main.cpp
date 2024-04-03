#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int lines, columns, eggs = 0;
  cin >> lines >> columns;

  int matriz[lines][columns];

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < lines; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < columns; j++)
      {
        eggs += matriz[i][j];
        if (eggs < 0)
          eggs = 0;
      }
    }
    else
    {
      for (int j = columns - 1; j >= 0; j--)
      {
        eggs += matriz[i][j];
        if (eggs < 0)
          eggs = 0;
      }
    }
  }

  cout << eggs << endl;

  return 0;
}
