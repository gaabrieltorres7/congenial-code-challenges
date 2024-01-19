#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int A, B, C, D, E, F;
  double result;

  cin >> A >> B >> C >> D >> E >> F;

  result = ((A + B) * (C - D) * (E + F)) / 2.0;

  cout << "Eu sou FERA nas continhas e o resultado é " << fixed << setprecision(1) << result << endl;

  return 0;
}
