#include <iostream>
using namespace std;

int main()
{
  int n, tickets[n], x, pos = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> tickets[i];
  }

  cin >> x;

  while (pos < n && tickets[pos] != x)
  {
    pos++;
  }

  if (pos == n)
  {
    cout << "Não há vencedor" << endl;
  }
  else
  {
    cout << "Número da poltrona do vencedor: " << pos << endl;
  }

  return 0;
}