#include <iostream>
using namespace std;

int main()
{
  char a;
  int b;
  cin >> a >> b;

  if (b == 0)
  {
    cout << "Acesso permitido!" << endl;
  }
  else if (b >= 30)
  {
    cout << "Imune! Siga para um local seguro" << endl;
  }
  else if (b >= 7)
  {
    cout << "Acesso negado! Fique em observacao" << endl;
  }
  else
  {
    cout << "Acesso negado! Isolamento urgente" << endl;
  }

  return 0;
}