#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && a == c)
  {
    cout << "Empate" << endl;
  }
  else if (a == b && c != a)
  {
    cout << "C" << endl;
  }
  else if (a == c && b != a)
  {
    cout << "B" << endl;
  }
  else
  {
    cout << "A" << endl;
  }

  return 0;
}