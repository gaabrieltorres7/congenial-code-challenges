#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  if ((x < 0 || y < 0) || (x > 432 || y > 468))
    cout << "fora" << endl;
  else
    cout << "dentro" << endl;

  return 0;
}