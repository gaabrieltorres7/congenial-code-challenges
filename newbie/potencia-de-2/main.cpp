#include <iostream>
using namespace std;

int main()
{
  int n, result = 2;
  cin >> n;

  for (int i = 1; i < n; i++)
  {
    result *= 2;
  }

  cout << result << endl;

  return 0;
}