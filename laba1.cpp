/*************************
 * Автор: Карпов Кирилл  *
 * Дата:	 28.12.2007  *
 * Название: вариант 4   *
 *************************/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
  double n1, b, K, y, T1, T2, n2, n3, a;

  cout << " b = ";
  cin >> b;

  cout << " y = ";
  cin >> y;

  cout << " T1 = ";
  cin >> T1;

  cout << " T2 = ";
  cin >> T2;

  cout << " a = ";
  cin >> a;

  K = (y - 1) / y;
  n1 = 1 - (pow((1 / b), K));
  n2 = (T2 - T1) / (T2 + ((T2 - T1) / ((y - 1) * log(a))));
  n3 = 1 - K * (log(b) / (pow(b, K) - 1));
  
  cout << "n1 =" << n1 << endl
  << "n2 =" << n2 << endl
  << "n3 =" << n3 << endl
  << "K =" << K << endl;
  
  return 0;
}