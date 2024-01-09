#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3, n4, n5, total;
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  total = n1 + n2 + n3 + n4 + n5;

  if (total > 5000)
  {
    cout << "Acesso proibido" << endl;
  }
  else
  {
    cout << "Acesso liberado" << endl;
  }

  return 0;
}