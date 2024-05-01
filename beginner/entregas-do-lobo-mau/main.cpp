#include <iostream>
using namespace std;

int main()
{
  int size, toll, valuePerKm, valuePerToll, total = 0;
  cin >> size >> toll >> valuePerKm >> valuePerToll;

  total = (size * valuePerKm) + ((size / toll) * valuePerToll);

  cout << total << endl;

  return 0;
}