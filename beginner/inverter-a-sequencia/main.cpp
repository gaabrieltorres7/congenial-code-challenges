#include <iostream>
using namespace std;

int main()
{
  int registrationNumber, arr[registrationNumber], invertedArr[registrationNumber];
  cin >> registrationNumber;

  for (int i = 0; i < registrationNumber; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < registrationNumber; i++)
  {
    invertedArr[i] = arr[registrationNumber - i - 1];
    cout << invertedArr[i] << " ";
  }

  return 0;
}