#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char c;
  float a, b;
  cin >> c >> a >> b;

  switch (c)
  {
  case '+':
    cout << a + b << endl;
    break;
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << fixed << setprecision(1) << a / b << endl;
    break;
  }
  return 0;
}