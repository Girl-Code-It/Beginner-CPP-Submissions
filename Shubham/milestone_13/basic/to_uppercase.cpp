#include<iostream>
#include<string>

#define MAX 100
using namespace std;

int main()
{
    //program to conver a string in uppercase

    char str[MAX];
    cout << "Enter a string \n";
    cin >> str;

    int i, j;

    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << "Final string is " << str << endl;

    
    
}   
