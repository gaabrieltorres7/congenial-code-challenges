#include <iostream>
using namespace std;

int main()
{
  int n, teleportation, pL, pC, acc = 0;
  cin >> n >> teleportation;

  int space[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> space[i][j];
    }
  }

  for (int i = 0; i < teleportation; i++)
  {
    cin >> pL >> pC;
    for (int j = pL - 1; j >= 0; j--)
    {
      if (space[j][pC] == 1)
      {
        acc++;
        space[j][pC] = 0;
        break;
      }
    }
  }

  cout << acc << endl;

  return 0;
}