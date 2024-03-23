#include <iostream>
using namespace std;

int main()
{
  int n, emeralds[n], emeraldNumber;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> emeralds[i];
  }

  cin >> emeraldNumber;

  for (int i = 0; i < n; i++)
  {
    if (emeralds[i] == emeraldNumber)
    {
      cout << emeraldNumber << endl;
      break;
    }
    else if (i == n - 1 && emeralds[i] != emeraldNumber)
    {
      cout << -1 << endl;
    }
  }

  return 0;
}