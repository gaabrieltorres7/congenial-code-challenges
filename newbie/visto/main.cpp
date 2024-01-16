#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n % 42 == 0)
    cout << "Sim";
  else
    cout << "Nao";

  return 0;
}