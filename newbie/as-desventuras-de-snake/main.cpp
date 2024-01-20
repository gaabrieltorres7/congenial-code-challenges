#include <iostream>
using namespace std;

int main()
{
  int q1, q2, q3, e1, e2, e3, eggs;

  cin >> q1 >> q2 >> q3 >> e1 >> e2 >> e3;

  eggs = (q1 + q2 + q3) - ((e1 * 2 + e1) + (e2 * 2 + e2) + (e3 * 2 + e3));

  cout << eggs << endl;

  return 0;
}