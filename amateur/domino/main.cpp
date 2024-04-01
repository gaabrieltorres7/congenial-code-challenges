#include <iostream>
using namespace std;

int main()
{
  int matriz[7][7] = {0};
  int acc = 0;

  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if (matriz[i][j] == 1)
      {
        acc++;
        matriz[j][i] = 0;
      }
    }
  }

  cout << acc << endl;

  return 0;
}