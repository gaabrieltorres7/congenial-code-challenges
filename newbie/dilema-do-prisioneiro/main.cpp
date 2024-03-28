#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a == 1 && b == 1)
  {
    cout << "Resultado para o Prisioneiro A: sentença leve (1 ano)" << endl;
    cout << "Resultado para o Prisioneiro B: sentença leve (1 ano)" << endl;
  }
  else if (a == 0 && b == 1)
  {
    cout << "Resultado para o Prisioneiro A: livre" << endl;
    cout << "Resultado para o Prisioneiro B: sentença pesada (10 anos)" << endl;
  }
  else if (a == 1 && b == 0)
  {
    cout << "Resultado para o Prisioneiro A: sentença pesada (10 anos)" << endl;
    cout << "Resultado para o Prisioneiro B: livre" << endl;
  }
  else
  {
    cout << "Resultado para o Prisioneiro A: sentença moderada (5 anos)" << endl;
    cout << "Resultado para o Prisioneiro B: sentença moderada (5 anos)" << endl;
  }

  return 0;
}