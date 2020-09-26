#include<iostream>
#include<string.h>

using namespace std;

static int i=0, flag=0;

void isPallindrom(char* S)
{
        static int len = 4;
        if(i <= len)
        {
                if(S[i] != S[len])
                {
                        cout << "Not Pallindrom" << endl;
                        flag =1;
                        return;
                }
                i++, len--;
        
                isPallindrom(S);
        }
        if(flag != 1)
        {
                cout << "Pallindrom\n";
                flag =1;
        }
}

int main()
{
        char s[100];
        cin >> s;
        isPallindrom(s);
}
