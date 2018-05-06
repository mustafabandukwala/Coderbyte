#include <iostream>
using namespace std;

void SimpleSymbols(string str)
{ 
  int i, count=0;
  for(i=0; i<str.length(); i++)
  {
      if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
      {
        if(str[i-1] == '+' && str[i+1] == '+')
        {
        }
        else
          count++;
      }
  }
  if(count>0)
    cout<<"false";
  else
    cout<<"true";
}

int main()
{ 
  SimpleSymbols(gets(stdin));
  return 0;
}
