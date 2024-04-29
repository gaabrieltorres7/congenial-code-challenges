#include <iostream>
using namespace std;

int main()
{
  int zetsuWaves, narutoWaves;
  cin >> zetsuWaves >> narutoWaves;

  int remaining = narutoWaves;

  for (int i = 0; i < zetsuWaves; i++)
  {
    int zetsuQty, narutoQty;
    cin >> zetsuQty >> narutoQty;

    remaining += narutoQty - zetsuQty;

    if (remaining < 0)
    {
      cout << "Madara venceu" << endl;
      return 0;
    }
  }

  cout << "Naruto defendeu a Vila" << endl;

  return 0;
}