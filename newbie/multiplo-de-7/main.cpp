#include <iostream>
using namespace std;

int main()
{
  int n;

  cin >> n;

  if (n % 7 == 0)
  {
    cout << "É MULTIPLO DE 7";
  }
  else
  {
    cout << "ESSE NÃO É";
  }

  return 0;
}