#include <iostream>
using namespace std;

int main()
{
  int totalFrogs, totalRocks;
  cin >> totalFrogs >> totalRocks;

  int eachJumpSize[totalFrogs], path[totalRocks] = {};

  for (int i = 0; i < totalFrogs; i++)
  {
    cin >> eachJumpSize[i];
  }

  for (int i = 0; i < totalFrogs; i++)
  {
    for (int j = 0; j < totalRocks; j += eachJumpSize[i])
    {
      path[j] = 1;
    }
  }

  for (int j = 0; j < totalRocks; j++)
  {
    cout << path[j] << " ";
  }

  return 0;
}