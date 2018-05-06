#include <iostream>
using namespace std;

void LetterCapitalize(string str)
{ 
  int i=1;
  if(str[0] >= 65 && str[0] <= 90)
  {
  }
  else if(str[0] >= 97 && str[0] <= 122)
  {
    str[0] -= 32;
  }
  while(str[i] != '')
  {
    if(str[i] == ' ')
    {
      if(str[i+1] >= 65 && str[i+1] <= 90)
      {
      }
      else if(str[i+1] >= 97 && str[i+1] <= 122)
      {
        str[i+1] -= 32;
      }
      i += 2;
    }
    else
     i++;
  }
  cout<<str;
}

int main()
{ 
  LetterCapitalize(gets(stdin));
  return 0;
}
