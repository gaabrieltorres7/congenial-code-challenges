#include <iostream>
using namespace std;

int main()
{
  string type;
  getline(cin, type);

  if (type == "demônio do fogo")
  {
    cout << "A fraqueza do demônio é: água" << endl;
  }
  else if (type == "demônio do gelo")
  {
    cout << "A fraqueza do demônio é: fogo" << endl;
  }
  else if (type == "demônio da fumaça")
  {
    cout << "A fraqueza do demônio é: vento" << endl;
  }
  else if (type == "demônio da escuridão")
  {
    cout << "A fraqueza do demônio é: luz" << endl;
  }
  else
  {
    cout << "Não foi possível identificar a fraqueza do demônio" << endl;
  }

  return 0;
}