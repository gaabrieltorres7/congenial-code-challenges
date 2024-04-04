#include <iostream>
using namespace std;

int main()
{
  int board[8][8], acc = 0;

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      cin >> board[i][j];
    }
  }

  int x, y;

  cin >> x >> y;

  for (int i = x; i == x; i++)
  { // percorro da posição da torre p esquerda
    for (int j = y - 1; j >= 0; j--)
    {
      if (board[i][j] == 1)
      {
        break;
      }
      else if (board[i][j] == 2)
      {
        acc++;
        break;
      }
    }
  }
  for (int i = x; i == x; i++)
  { // percorro da posição da torre p direita
    for (int j = y + 1; j < 8; j++)
    {
      if (board[i][j] == 1)
      {
        break;
      }
      else if (board[i][j] == 2)
      {
        acc++;
        break;
      }
    }
  }

  for (int i = x - 1; i >= 0; i--)
  { // percorro da posição da torre p cima
    if (board[i][y] == 1)
    {
      break;
    }
    else if (board[i][y] == 2)
    {
      acc++;
      break;
    }
  }
  for (int i = x + 1; i < 8; i++)
  { // percorro da posição da torre p baixo
    if (board[i][y] == 1)
    {
      break;
    }
    else if (board[i][y] == 2)
    {
      acc++;
      break;
    }
  }

  cout << acc << endl;

  return 0;
}