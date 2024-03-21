#include <iostream>
using namespace std;

int main()
{
  int fishes, value, total;
  cin >> fishes >> value;
  total = fishes * value;

  if (total < 500)
  {
    cout << "Paciencia Firmino!" << endl;
  }
  else if (total < 1800)
  {
    cout << "Vara de Bambu" << endl;
  }
  else if (total < 7500)
  {
    cout << "Vara de Fibra de Vidro" << endl;
  }
  else
  {
    cout << "Vara de Iridio" << endl;
  }

  return 0;
}