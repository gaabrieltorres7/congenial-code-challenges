#include <iostream>
using namespace std;

int main()
{
  int l, p, tl = 0, tp = 0;

  for (int i = 0; i < 3; i++)
  {
    cin >> l >> p;
    tp += p;
    tl += l;
  }

  if (tl > tp)
  {
    cout << "Lucas" << endl;
  }
  else if (tp > tl)
  {
    cout << "Pedro" << endl;
  }
  else
  {
    cout << "Empate" << endl;
  }

  return 0;
}