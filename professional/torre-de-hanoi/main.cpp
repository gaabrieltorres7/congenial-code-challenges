#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, acc = 1;

  while (true)
  {
    cin >> n;
    if (n == 0)
      break;

    int total_moves = pow(2, n) - 1;

    cout << "Teste " << acc++ << endl;
    cout << total_moves << endl;
    cout << endl;
  }

  return 0;
}
