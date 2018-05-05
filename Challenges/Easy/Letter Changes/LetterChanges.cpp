#include <iostream>
using namespace std;

void LetterChanges(string str)
{ 
  for(int i=0; i<str.length(); i++)
  {
    if((str[i] >= 65 && str[i] <= 90) || (str[i] >=97 && str[i] <=122))
    {
      str[i] += 1;
      if((str[i] >= 65 && str[i] <= 90) || (str[i] >=97 && str[i] <=122))
      {
      }
      else
      {
      str[i] -= 26;
      }
    }
  }
  for(int j=0; j<str.length(); j++)
  {
    if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
      str[j] -= 32;
  }
  cout<<str;
}

int main()
{ 
  LetterChanges(gets(stdin));
  return 0;
}
