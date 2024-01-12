#include <iostream>
using namespace std;

int main()
{
  int n;
  do
  {
    cin >> n;
    if (n == 0)
      break;
    cout << n * -1 << endl;
  } while (true);

  return 0;
}