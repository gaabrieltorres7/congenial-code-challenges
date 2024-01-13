#include <iostream>
using namespace std;

int calculateWaterBill(int waterConsumption, int signature);

int main()
{
  int waterConsumption, signature = 7;
  cin >> waterConsumption;

  cout << calculateWaterBill(waterConsumption, signature) << endl;

  return 0;
}

int calculateWaterBill(int waterConsumption, int signature)
{
  if (waterConsumption <= 10)
  {
    return signature;
  }
  else if (waterConsumption <= 30)
  {
    return signature + (waterConsumption - 10);
  }
  else if (waterConsumption <= 100)
  {
    return signature + 20 + ((waterConsumption - 30) * 2);
  }
  else
  {
    return signature + 20 + 140 + ((waterConsumption - 100) * 5);
  }
}