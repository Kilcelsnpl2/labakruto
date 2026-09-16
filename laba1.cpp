/*************************
 * Автор:	 Карпов К.Е. *
 * Дата:	 28.12.2007  *
 * Название: вариант 4   *
 *************************/
#include <iostream>
#include <math.h>
using namespace std;


int main() 
{
  double n1, b, K, y;
  cout << " b = ";
  cin >> b;
  cout << " y = ";
  cin >> y;
	
  K = (y - 1) / y;
  
  n1 = 1 - (pow((1 / b), K));
  
  cout << "n1 =" << n1 << endl;
  
  return 0;
}