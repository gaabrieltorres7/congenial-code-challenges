#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a * b >= c)
    cout << "S" << endl;
  else
    cout << "N" << endl;

  return 0;
}