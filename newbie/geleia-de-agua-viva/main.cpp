#include <iostream>
using namespace std;

int main()
{
  int n, acc1 = 0, acc2 = 0;
  cin >> n;
  int soldKrustyKrab[n];

  for (int i = 0; i < n; i++)
  {
    cin >> soldKrustyKrab[i];
    if (soldKrustyKrab[i] == 11)
      acc1++;
    else
      acc2++;
  }

  if (acc2 > acc1)
    cout << "Tradicional" << endl;
  else
    cout << "Geleia" << endl;

  return 0;
}