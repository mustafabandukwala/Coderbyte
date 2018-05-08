#include <iostream>
using namespace std;

int PentagonalNumber(int num)
{ 
    int result = 1, counter = 5;
    for(int i=1; i<num; i++)
    {
        result = result + counter;
        counter = counter + 5;
    }
    return result; 
}

int main()
{ 
  cout << PentagonalNumber(gets(stdin));
  return 0;
}
