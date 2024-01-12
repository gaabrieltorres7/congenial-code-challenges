#include <iostream>
using namespace std;

int main()
{
  int lifePoints, damage, acc = 0;

  cin >> lifePoints >> damage;

  for (damage; damage > 0 && lifePoints > 0; damage--)
  {
    acc++;
    lifePoints -= damage;
  }

  if (lifePoints > 0)
  {
    cout << "F" << endl;
  }
  else
  {
    cout << acc << endl;
  }

  return 0;
}