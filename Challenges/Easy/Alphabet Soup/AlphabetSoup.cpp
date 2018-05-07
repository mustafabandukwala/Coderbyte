#include <iostream>
using namespace std;

void AlphabetSoup(string str)
{ 
  int size = str.length();
  for(int i=0; i<size-1; i++)
  {
    for(int j=i+1; j<size; j++)
    {
      if(str[i] > str[j])
      {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  cout<<str;
}

int main()
{ 
  AlphabetSoup(gets(stdin));
  return 0;
}
