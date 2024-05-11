#include <iostream>
using namespace std;

int main()
{
  string battlefield[10][10];
  int orcsPower, humansPower;
  bool isThereAMagicianOrcs = false;
  bool isThereAMagicianHumans = false;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cin >> battlefield[i][j];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (battlefield[i][j] == "m" && j < 5)
        isThereAMagicianOrcs = true;
      if (battlefield[i][j] == "m" && j >= 5)
        isThereAMagicianHumans = true;
    }
  }

  // orcs
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int teammates = 0;
      if (isThereAMagicianOrcs)
      {
        if (j > 0 && battlefield[i][j] == "o" && (battlefield[i][j - 1] == "o" || battlefield[i][j - 1] == "m"))
        {
          teammates += 1;
          orcsPower += 1;
        }
        if (j < 4 && battlefield[i][j] == "o" && (battlefield[i][j + 1] == "o" || battlefield[i][j + 1] == "m"))
        {
          teammates += 1;
          orcsPower += 1;
        }
        if (i < 9 && battlefield[i][j] == "o" && (battlefield[i + 1][j] == "o" || battlefield[i + 1][j] == "m"))
        {
          teammates += 1;
          orcsPower += 1;
        }
        if (i > 0 && battlefield[i][j] == "o" && (battlefield[i - 1][j] == "o" || battlefield[i - 1][j] == "m"))
        {
          teammates += 1;
          orcsPower += 1;
        }
        orcsPower += teammates;
      }
      else
      {
        if (battlefield[i][j] == "o" || battlefield[i][j] == "m")
          orcsPower++;
      }
    }
  }

  // humans
  for (int i = 0; i < 10; i++)
  {
    for (int j = 5; j < 10; j++)
    {
      int teammates = 0;
      if (isThereAMagicianHumans)
      {
        if (j > 5 && battlefield[i][j] == "h" && (battlefield[i][j - 1] == "h" || battlefield[i][j - 1] == "m"))
        {
          teammates += 1;
          humansPower += 1;
        }
        if (j < 9 && battlefield[i][j] == "h" && (battlefield[i][j + 1] == "h" || battlefield[i][j + 1] == "m"))
        {
          teammates += 1;
          humansPower += 1;
        }
        if (i < 9 && battlefield[i][j] == "h" && (battlefield[i + 1][j] == "h" || battlefield[i + 1][j] == "m"))
        {
          teammates += 1;
          humansPower += 1;
        }
        if (i > 0 && battlefield[i][j] == "h" && (battlefield[i - 1][j] == "h" || battlefield[i - 1][j] == "m"))
        {
          teammates += 1;
          humansPower += 1;
        }
        humansPower += teammates;
      }
      else
      {
        if (battlefield[i][j] == "h" || battlefield[i][j] == "m")
          humansPower++;
      }
    }
  }

  if (humansPower > orcsPower)
    cout << "Pela Alianca!" << endl;
  else if (humansPower < orcsPower)
    cout << "Loktar Ogar!!!" << endl;
  else
    cout << "Batalha lendaria!" << endl;

  return 0;
}