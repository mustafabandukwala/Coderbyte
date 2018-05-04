#include <iostream>
using namespace std;

void FirstReverse(string str)
{ 
  int i=0;
  while(str[i++] != '');
  for(int j=i-2; j>=0; j--)
    cout<<str[j];
}

int main()
{ 
  FirstReverse(gets(stdin));
  return 0;    
}
