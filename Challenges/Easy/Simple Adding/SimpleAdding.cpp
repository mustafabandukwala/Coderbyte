#include <iostream>
using namespace std;

int SimpleAdding(int num)
{ 
  long sum=0;
  while(num>0)
  {
    sum += num;
    num--;
  }
  return sum; 
}

int main()
{ 
  cout << SimpleAdding(gets(stdin));
  return 0;
}
