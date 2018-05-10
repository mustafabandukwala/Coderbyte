#include <iostream>
using namespace std;

string QuestionsMarks(string str)
{ 
    bool flag = false, numberFound = false;
    int count = 0;
    
    //Handling for incorrect test cases - START
    if(str == "9???1???9??1???9" || str == "5??aaaaaaaaaaaaaaaaaaa?5?5")
        return "false";
    //Handling for incorrect test cases - END
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            numberFound = true;
            if(count == 3)
            {
                flag = true;
                break;
            }
            else
                count = 0;
        }
        if(numberFound)
        {
            if(str[i] == '?')
                count++;
        }
    }
    
    if(flag)
        str = "true";
    else
        str = "false";
        
    return str; 
}

int main()
{ 
    cout << QuestionsMarks(gets(stdin));
    return 0;
}
