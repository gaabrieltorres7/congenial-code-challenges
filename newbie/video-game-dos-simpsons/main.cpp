#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double x, y;
  cin >> x >> y;

  cout << fixed << setprecision(2) << x + y << endl;

  return 0;
}