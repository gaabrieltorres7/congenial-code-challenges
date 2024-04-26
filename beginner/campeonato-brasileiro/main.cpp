#include <iostream>
using namespace std;

int main()
{
  int cv, ce, cs, fv, fe, fs, totalc = 0, totalf = 0;
  cin >> cv >> ce >> cs >> fv >> fe >> fs;

  totalc = (cv * 3) + ce;
  totalf = (fv * 3) + fe;

  if (totalc > totalf)
    cout << "C" << endl;
  else if (totalf > totalc)
    cout << "F" << endl;
  else if (cs > fs)
    cout << "C" << endl;
  else if (fs > cs)
    cout << "F" << endl;
  else
    cout << "=" << endl;

  return 0;
}