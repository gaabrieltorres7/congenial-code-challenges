#include <iostream>
using namespace std;

int main()
{
  int numberOfStudents, average = 0, acc = 0;
  cin >> numberOfStudents;

  int grades[numberOfStudents];

  for (int i = 0; i < numberOfStudents; i++)
  {
    cin >> grades[i];
    average += grades[i];
  }

  average /= numberOfStudents;

  for (int i = 0; i < numberOfStudents; i++)
  {
    if (grades[i] > average)
      acc++;
  }

  cout << acc << endl;

  return 0;
}