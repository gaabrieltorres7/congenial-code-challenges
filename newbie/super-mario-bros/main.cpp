#include <iostream>
using namespace std;

int main()
{
  int sc, mm, ck;
  cin >> sc >> mm >> ck;

  if (sc > 29)
    cout << "PROXIMO MUNDO" << endl;
  else
    cout << 30 - sc << " " << 6 - mm << " " << 3 - ck;

  return 0;
}