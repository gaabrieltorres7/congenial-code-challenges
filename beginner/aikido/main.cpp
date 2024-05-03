#include <iostream>
using namespace std;

int main()
{
  int time, hours;
  cin >> time >> hours;

  if (time < 1)
    cout << "branca" << endl;
  else if (hours > 119)
    cout << "marrom" << endl;
  else if (hours > 109)
    cout << "azul" << endl;
  else if (hours > 89)
    cout << "verde" << endl;
  else if (hours > 71)
    cout << "roxa" << endl;
  else
    cout << "amarela" << endl;

  return 0;
}