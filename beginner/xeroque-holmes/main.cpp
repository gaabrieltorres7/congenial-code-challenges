#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char sentence[50];
  string password = "";

  for (int i = 0; i < 6; i++)
  {
    cin >> sentence;
    password += to_string(strlen(sentence));
  }

  cout << password << endl;

  return 0;
}