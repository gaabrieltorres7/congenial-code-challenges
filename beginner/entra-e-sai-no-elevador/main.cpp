#include <iostream>
using namespace std;

int main()
{
  int N, C, S, E, total = 0;
  cin >> N >> C;

  for (int i = 0; i < N; i++)
  {
    cin >> S >> E;
    total += E;
    total -= S;
    if (total > C)
    {
      cout << 'S' << endl;
      return 0;
    }
  }

  cout << 'N' << endl;

  return 0;
}