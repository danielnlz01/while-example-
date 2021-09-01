#include <iostream>

using namespace std;

int num, fact;

int main() 
{
	
	do
	{
		cout << "number? ";
		cin >> num;
	} while (num <= 1);
	
  fact = 1;
  
  while (num > 1)
  {
  	fact = fact * num;
  	num--;
  }
  
  cout << "The factorial is: " << fact << endl;
  
  return 0;
}