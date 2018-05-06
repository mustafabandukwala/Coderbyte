#include <iostream>
using namespace std;

void CheckNums(int num1, int num2)
{ 
  if(num2 > num1)
    cout<<"true";
  else if(num1 > num2)
    cout<<"false";
  else
    cout<<"-1";
}

int main()
{ 
  CheckNums(gets(stdin));
  return 0;
}
