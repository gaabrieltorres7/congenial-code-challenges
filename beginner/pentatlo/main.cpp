#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int registrationNumber, n1, n2, n3, n4, n5;
  float average;

  cin >> registrationNumber >> n1 >> n2 >> n3 >> n4 >> n5;

  average = (n1 + n2 + n3 + n4 + n5) / 5.0;

  cout << registrationNumber << " " << fixed << setprecision(1) << average << endl;

  return 0;
}