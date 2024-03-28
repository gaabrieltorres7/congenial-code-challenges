#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3, n4, n5, n6, total;
  cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
  total = n1 + n2 + n3 + n4 + n5 + n6;

  if (total > 249)
    cout << "S+" << endl;
  else if (total > 199)
    cout << "S" << endl;
  else if (total > 179)
    cout << "S-" << endl;
  else if (total > 149)
    cout << "A+" << endl;
  else if (total > 99)
    cout << "A" << endl;
  else if (total > 79)
    cout << "A-" << endl;
  else if (total > 59)
    cout << "B+" << endl;
  else if (total > 39)
    cout << "B" << endl;
  else
    cout << "B-" << endl;

  return 0;
}