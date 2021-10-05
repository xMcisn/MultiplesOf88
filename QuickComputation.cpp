#include <iostream>
#include <cmath>

using namespace std;

const char NUM_ARRAY [10]  = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const char UPPERCASE_ARRAY [26]  = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const char LOWERCASE_ARRAY [26]  = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
const char SYMBOL_ARRAY [26]  = {'!','@','#','$','%','^','&','*','(',')','-','_','+','=','{','}','[',']',':',';','<',',','>','.','?','/'};

char getChar(int x);

int main()
{
    int totalNumCombinations = 0; 
    
    const int BASE_INT = 88;
    const int EXPONENT = 2;
    
    cout << BASE_INT << " to the " << EXPONENT << " power: " << pow(BASE_INT, EXPONENT) << endl;
    
    for(int i = 0; i < 88; i++)
    {
        for(int j = 0; j < 88; j++)
        {
            for(int k = 0; k < 88; k++)
            {
                cout << getChar(i);
                cout << getChar(j);
                cout << getChar(k);
                totalNumCombinations++;
                cout << endl;
            }
        }
    }
    
    cout << "Total combi: " << totalNumCombinations << endl;
    return 0;
}

char getChar(int x)
{
        if(x < 26)
        {
            return UPPERCASE_ARRAY[x % sizeof(UPPERCASE_ARRAY)];
        }
        else if(x < 52)
        {
            return LOWERCASE_ARRAY[x % sizeof(LOWERCASE_ARRAY)];
        }
        else if(x < 78)
        {
            return SYMBOL_ARRAY[x % sizeof(SYMBOL_ARRAY)];
        }
        else if(x < 88)
        {
            return NUM_ARRAY[x % sizeof(NUM_ARRAY)];
        }
}