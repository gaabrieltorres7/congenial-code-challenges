#include <iostream>
using namespace std;

int main()
{
  int n, powers, sum = 0;
  cin >> n;

  for (int i = 0; i < n * 2; i++)
  {
    cin >> powers;
    sum += powers;
    if (i % 2 != 0)
    {
      cout << sum << endl;
      sum = 0;
    }
  }

  return 0;
}