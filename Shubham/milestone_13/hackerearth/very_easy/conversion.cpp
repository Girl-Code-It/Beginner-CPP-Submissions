#include<iostream>
#include<string.h>
#define MAX 100


using namespace std;

int main()
{
    //conversion program

    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        char s[MAX];
        scanf(" %[^\n]%*c", s);

        //converting the string into upper case

        for(int j=0; j<strlen(s); j++)
        {
            if(s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - 32;
            }
        }

        //conversion

        for(int j=0; j<strlen(s); j++)
        {
            if(s[j] == ' ')
                cout << '$';
            else 
            {
                cout << (int)(s[j]-64);
            }
        }
        cout << endl;
    }
}
