#include <iostream>
using namespace std;

int main()
{
  int qty, cents, totalDForEachPerson;

  do
  {
    cin >> qty >> cents >> totalDForEachPerson;
    if (!qty && !cents && !totalDForEachPerson)
      break;

    cout << qty * cents * totalDForEachPerson << endl;
  } while (true);

  return 0;
}