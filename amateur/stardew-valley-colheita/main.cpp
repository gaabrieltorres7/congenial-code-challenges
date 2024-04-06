#include <iostream>
using namespace std;

int main()
{
  int lines, colunms, acc = 0, pos;
  char character;
  cin >> lines >> colunms;

  int land[lines][colunms];

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < colunms; j++)
    {
      cin >> land[i][j];
    }
  }

  cin >> character >> pos;

  if (character == 'L')
  {
    for (int i = 0; i < colunms; i++)
    {
      acc += land[pos - 1][i];
    }
  }
  else
  {
    for (int i = 0; i < lines; i++)
    {
      acc += land[i][pos - 1];
    }
  }

  cout << acc << endl;

  return 0;
}