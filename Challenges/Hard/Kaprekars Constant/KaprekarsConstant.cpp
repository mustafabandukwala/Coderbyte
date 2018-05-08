#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int KaprekarsConstant(int num)
{
    int num1=0, num2=0, i=4, factor=1000, count = 0;
    while(num != 6174)
    {
        vector<int> result;
        num1=0, num2=0, i=4, factor=1000;
        count++;
        while(i > 0)
        {
            int temp = num % 10;
            num = num / 10;
            result.push_back(temp);
            i--;
        }
        
        std::sort(result.begin(), result.end());
        for(int j=0; j<result.size(); j++)
        {
            num1 = num1 + (factor * result[j]);
            factor = factor / 10;
        }
        
        
        factor = 1000;
        std::sort(result.begin(), result.end(), std::greater<int>());
        for(int j=0; j<result.size(); j++)
        {
            num2 = num2 + (factor * result[j]);
            factor = factor / 10;
        }
        
        num = num2 - num1;
    }
    return count; 
}

int main()
{ 
    cout << KaprekarsConstant(gets(stdin));
    return 0;
}
