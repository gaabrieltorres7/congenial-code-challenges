#include <iostream>
using namespace std;

void howManyLaps(float degradationRate)
{
  int result = 80 / degradationRate;
  cout << result << endl;
}

int main()
{
  char tireType;
  float degradationRateS, degradationRateM, degradationRateH;

  cin >> tireType >> degradationRateS >> degradationRateM >> degradationRateH;

  if (tireType == 'S')
  {
    howManyLaps(degradationRateS);
  }
  else if (tireType == 'M')
  {
    howManyLaps(degradationRateM);
  }
  else
  {
    howManyLaps(degradationRateH);
  }

  return 0;
}