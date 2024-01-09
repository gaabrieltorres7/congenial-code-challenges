#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;

  string months[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

  cout << months[x - 1] << endl;

  return 0;
}