#include <iostream>
using namespace std;

int main()
{
  int intendToRun, runwayLength, endpoint;
  cin >> intendToRun >> runwayLength;

  endpoint = intendToRun - ((intendToRun / runwayLength) * runwayLength);

  cout << endpoint << endl;

  return 0;
}