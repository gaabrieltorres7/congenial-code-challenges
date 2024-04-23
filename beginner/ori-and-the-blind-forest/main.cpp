#include <iostream>
using namespace std;

int main()
{
  int requiredTotalXP, missionsAccomplished, totalXp = 0;

  cin >> requiredTotalXP >> missionsAccomplished;

  int xps[missionsAccomplished], bonus[missionsAccomplished];

  for (int i = 0; i < missionsAccomplished; i++)
  {
    cin >> xps[i];
  }

  for (int i = 0; i < missionsAccomplished; i++)
  {
    cin >> bonus[i];
  }

  for (int i = 0; i < missionsAccomplished; i++)
  {
    totalXp += xps[i] * bonus[i];
  }

  if (totalXp >= requiredTotalXP)
    cout << "Upou de Nivel!" << endl;
  else
    cout << "Nao foi dessa vez!" << endl;

  return 0;
}