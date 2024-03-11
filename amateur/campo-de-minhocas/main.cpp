#include <iostream>
using namespace std;

int main()
{
  int lines, colunms, acc = 0, acc2 = 0, accLine = 0, acc2Line = 0;
  cin >> lines >> colunms;

  int estimatedProductivity[lines][colunms];

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j < colunms; j++)
    {
      cin >> estimatedProductivity[i][j];
    }
  };

  for (int i = 0; i < lines; i++)
  {
    accLine = 0;
    for (int j = 0; j < colunms; j++)
    {
      accLine += estimatedProductivity[i][j];
    }
    if (accLine > acc2Line)
      acc2Line = accLine;
  };

  for (int i = 0; i < colunms; i++)
  {
    acc = 0;
    for (int j = 0; j < lines; j++)
    {
      acc += estimatedProductivity[j][i];
    }
    if (acc > acc2)
      acc2 = acc;
  };

  if (acc2 > acc2Line)
  {
    cout << acc2 << endl;
  }
  else
    cout << acc2Line << endl;

  return 0;
}