#include <iostream>
using namespace std;

int main()
{
  int desiredPressure, readPressure;

  cin >> desiredPressure >> readPressure;

  cout << desiredPressure - readPressure << endl;

  return 0;
}