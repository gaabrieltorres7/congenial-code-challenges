#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string x;
  cin >> x;

  if (x == "idoso")
  {
    cout << "gratuidade" << endl;
  }
  else if (x == "estudante")
  {
    cout << "10 reais" << endl;
  }
  else if (x == "casadinha")
  {
    cout << "30 reais" << endl;
  }
  else if (x == "trio")
  {
    cout << "40 reais" << endl;
  }
  else
  {
    cout << "20 reais" << endl;
  }

  return 0;
}
