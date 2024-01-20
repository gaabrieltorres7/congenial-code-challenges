#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float n1, n2, n3, average;
  cin >> n1 >> n2 >> n3;

  average = ((n1 * 4) + (n2 * 4) + (n3 * 2)) / 10;

  cout << fixed << setprecision(2) << average << endl;

  return 0;
}