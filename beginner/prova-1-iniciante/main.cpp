#include <iostream>
#include <iterator>
using namespace std;

int main()
{
  int n, sequence, acc = 1, acc2 = 1, currentNum, arr[n];

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> sequence;
    arr[i] = sequence;
  }

  for (int i = 0; i < n; i++)
  {
    currentNum = arr[i];
    if (currentNum < arr[i + 1])
    {
      acc++;
    }
    else
    {
      if (acc > acc2)
        acc2 = acc;
      acc = 1;
    }
  }

  cout << acc2;

  return 0;
}