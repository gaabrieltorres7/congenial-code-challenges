#include <iostream>
using namespace std;

int main()
{
  int n;
  string sentence;

  cin >> n;
  cin.ignore();
  getline(cin, sentence);

  for (int i = n; i > 0; i--)
  {
    cout << i << ". " << sentence << endl;
  }

  return 0;
}