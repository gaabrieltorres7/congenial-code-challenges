#include <iostream>
#include <iomanip>
using namespace std;

void coutFunc(float wage, int percent)
{
  cout << fixed << setprecision(2);
  cout << "Novo salario: " << ((wage * percent) / 100) + wage << endl;
  cout << "Reajuste ganho: " << ((wage * percent) / 100) << endl;
  cout << "Em percentual: " << percent << " %" << endl;
}

int main()
{
  float wage;
  cin >> wage;

  if (wage > 2000)
  {
    coutFunc(wage, 4);
  }
  else if (wage > 1200)
  {
    coutFunc(wage, 7);
  }
  else if (wage > 800)
  {
    coutFunc(wage, 10);
  }
  else if (wage > 400)
  {
    coutFunc(wage, 12);
  }
  else
  {
    coutFunc(wage, 15);
  }

  return 0;
}