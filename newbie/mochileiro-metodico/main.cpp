#include <iostream>
using namespace std;

int main()
{
  int itensNumber, sequence[itensNumber];
  cin >> itensNumber;

  for (int i = 0; i < itensNumber; i++)
  {
    cin >> sequence[i];
  }

  for (int i = itensNumber - 1; i > -1; i--)
  {
    cout << sequence[i] << " ";
  }

  return 0;
}