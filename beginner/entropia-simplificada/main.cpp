#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int n;
  cin >> n;

  cout << fixed << setprecision(4) << log2(n) << endl;

  return 0;
}