#include <iostream>
using namespace std;

int main()
{
  long widthContainer, lengthContainer, heightContainer, widthShip, lengthShip, maxHeightShip, totalContainer;

  cin >> widthContainer >> lengthContainer >> heightContainer >> widthShip >> lengthShip >> maxHeightShip;
  cout << (lengthShip / lengthContainer) * (widthShip / widthContainer) * (maxHeightShip / heightContainer) << endl;

  return 0;
}