#include <iostream>
using namespace std;

int main()
{
  int n, xp, xpi1, xpi2, xpi3;
  cin >> n >> xp >> xpi1 >> xpi2 >> xpi3;

  cout << "Yoda " << xpi1 + (n * xp) << endl;
  cout << "Luke " << xpi2 + (n * xp) << endl;
  cout << "Ahsoka " << xpi3 + (n * xp) << endl;

  return 0;
}