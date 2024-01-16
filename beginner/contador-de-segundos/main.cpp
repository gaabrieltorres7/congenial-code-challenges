#include <iostream>
using namespace std;

int main()
{
  int n, hour, minutes, seconds;
  cin >> n;

  hour = n / 3600;
  minutes = (n % 3600) / 60;
  seconds = n % 60;

  cout << hour << "h " << minutes << "m " << seconds << "s" << endl;

  return 0;
}