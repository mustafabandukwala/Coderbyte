#include <iostream>
using namespace std;

void LongestWord(string sen)
{ 
  int i=0, j, prev=0, largest=0, start=0, end=0;
  
  for(i=0;sen[i]!='';i++)
  {
    if((sen[i] >= 'A' && sen[i] <= 'Z') || (sen[i] >= 'a' && sen[i] <= 'z'))
    {
      prev++;
      if(sen[i+1] == '')
      {
        if(largest<prev)
        {
          start=i+1-prev;
          end=i+1;
          largest=prev;
        }
      }
    }
    else
    {
      if(largest<prev)
      {
        start=i-prev;
        end=i;
        largest=prev;
      }
      prev=0;
    }
  }
  for(j=start;j<end;j++)
    cout<<sen[j];          
}

int main()
{ 
  LongestWord(gets(stdin));
  return 0;
    
}
