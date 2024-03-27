#include <iostream>
using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  if (a == "direita" && b == "esquerda")
    cout << "Achou" << endl;
  else if (a == "esquerda" && b == "esquerda")
    cout << "Morreu" << endl;
  else
    cout << "Tente novamente" << endl;

  return 0;
}