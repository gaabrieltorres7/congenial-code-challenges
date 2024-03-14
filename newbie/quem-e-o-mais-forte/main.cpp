#include <iostream>
using namespace std;

int main()
{
  int luxDamage, ekkoDamage;
  cin >> luxDamage >> ekkoDamage;

  if (luxDamage > ekkoDamage)
  {
    cout << luxDamage << endl
         << "Lux";
  }
  else if (luxDamage < ekkoDamage)
  {
    cout << ekkoDamage << endl
         << "Ekko";
  }
  else
  {
    cout << ekkoDamage << endl
         << "Os dois tem a mesma quantidade de poder";
  }

  return 0;
}