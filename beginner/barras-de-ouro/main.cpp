#include <iostream>
using namespace std;

int main()
{
  int acc = 0, n;

  do
  {
    cin >> n;
    if (n == 0)
      break;
    acc += n;
  } while (true);

  cout << acc;

  return 0;
}