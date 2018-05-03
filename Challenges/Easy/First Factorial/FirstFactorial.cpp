#include <iostream>
using namespace std;

int FirstFactorial(int num)
{ 
  long fact=1, i;
  for(i=1; i<=num; i++)
    fact *= i;
  return fact; 
            
}

int main()
{ 
  cout << FirstFactorial(gets(stdin));
  return 0;
}
