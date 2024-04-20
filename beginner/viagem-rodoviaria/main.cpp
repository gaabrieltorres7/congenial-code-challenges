#include <iostream>
using namespace std;

int main()
{
  int roadLength, distanceBtwToll, costPerKm, tollValue, totalCost = 0;
  cin >> roadLength >> distanceBtwToll >> costPerKm >> tollValue;

  totalCost = ((roadLength / distanceBtwToll) * tollValue) + (roadLength * costPerKm);

  cout << totalCost << endl;

  return 0;
}