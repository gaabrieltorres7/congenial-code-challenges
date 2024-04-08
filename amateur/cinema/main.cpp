#include <iostream>
using namespace std;

int main()
{
  int F, C, f, c1, c2;
  cin >> F >> C;
  int cinema[F][C];

  for (int i = 0; i < F; i++)
  {
    for (int j = 0; j < C; j++)
    {
      cin >> cinema[i][j];
    }
  }

  for (int i = 0; i < F; i++)
  {
    for (int j = 0; j < C - 1; j++)
    {
      if (cinema[i][j] == 0 && cinema[i][j + 1] == 0)
      {
        f = i + 1;
        c1 = j + 1;
        c2 = j + 2;
        break;
      }
    }
  }

  cout << "Fileira: " << f << endl;
  cout << "Assentos: " << c1 << " e " << c2 << endl;

  return 0;
}