#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int P[N];

  for (int i = 0; i < N; i++)
  {
    cin >> P[i];
    if (i > 0 && P[i] == P[i - 1])
    {
      cout << P[i] << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}