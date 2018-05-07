#include <iostream>
using namespace std;

void TimeConvert(int num)
{ 
  int count=0;
  while(num>59)
  {
    num -= 60;
    count++;
  }
  cout<<count<<":"<<num;
}

int main()
{ 
  TimeConvert(gets(stdin));
  return 0;
}
