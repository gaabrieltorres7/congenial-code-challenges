#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
  int peopleInQueue, peopleLeftQueue;
  cin >> peopleInQueue;

  vector<int> idOfPeopleInQueue(peopleInQueue);
  for (int i = 0; i < peopleInQueue; i++)
  {
    cin >> idOfPeopleInQueue[i];
  }

  cin >> peopleLeftQueue;

  unordered_set<int> leftQueueIds;
  for (int i = 0; i < peopleLeftQueue; i++)
  {
    int id;
    cin >> id;
    leftQueueIds.insert(id);
  }

  vector<int> remainingQueueIdentifiers;
  for (int i = 0; i < peopleInQueue; i++)
  {
    if (leftQueueIds.find(idOfPeopleInQueue[i]) == leftQueueIds.end())
    {
      remainingQueueIdentifiers.push_back(idOfPeopleInQueue[i]);
    }
  }

  for (int id : remainingQueueIdentifiers)
  {
    cout << id << " ";
  }

  return 0;
}