#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float B, b, h;
  cin >> B >> b >> h;

  cout << fixed << setprecision(1);
  cout << "A=" << (((B + b) * h) / 2.0) << endl;

  return 0;
}