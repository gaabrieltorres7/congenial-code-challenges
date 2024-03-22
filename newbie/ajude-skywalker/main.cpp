#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, e, enemyShips;
  cin >> a >> b >> c >> d >> e;
  enemyShips = a - (b + c + d + e);

  cout << enemyShips << endl;

  return 0;
}