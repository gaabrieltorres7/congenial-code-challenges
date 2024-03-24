#include <iostream>
using namespace std;

int main()
{
  int x, parts[x], y;
  cin >> x;

  for (int i = 0; i < x; i++)
  {
    cin >> parts[i];
  }

  cin >> y;

  for (int i = 0; i < x; i++)
  {
    cout << parts[i] * y << " ";
  }

  return 0;
}