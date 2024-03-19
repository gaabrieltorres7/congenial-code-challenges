#include <iostream>
using namespace std;

int main()
{
  int n, supplies[n], acc = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> supplies[i];
    acc += supplies[i];
  }

  cout << acc << endl;

  return 0;
}