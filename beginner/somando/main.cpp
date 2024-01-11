#include <iostream>
using namespace std;

int main()
{
  int totalASerSomado, num, acc = 0;

  cin >> totalASerSomado;

  for (int i = 0; i < totalASerSomado; i++)
  {
    cin >> num;
    acc = acc + num;
  }

  cout << acc << endl;

  return 0;
}