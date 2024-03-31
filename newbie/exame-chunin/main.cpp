#include <iostream>
using namespace std;

int main()
{
  string p1, p2;
  cin >> p1 >> p2;

  if (p1 == "A" && p2 == "B" || p1 == "B" && p2 == "A")
    cout << "classificado" << endl;
  else
    cout << "eliminado" << endl;

  return 0;
}