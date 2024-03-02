#include <iostream>
using namespace std;

int main()
{
  int n, nums[n], exit[n];
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (i == 0)
      exit[i] = nums[i] + nums[i + 1];
    else if (i == n - 1)
      exit[i] = nums[i] + nums[i - 1];
    else
      exit[i] = nums[i] + nums[i + 1] + nums[i - 1];

    cout << exit[i] << endl;
  }

  return 0;
}