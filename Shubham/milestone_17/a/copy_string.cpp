#include<iostream>

using namespace std;
static int i=0;

void copy(char* s, char* d)
{
        if(s[i] == '\0')
                return;
        
        d[i] = s[i];
        i++;
        copy(s, d);
}

int main()
{
        char s[100], d[100];
        cin >> s;

        copy(s, d);

        cout << "First String : ";
        cout << s << endl;

        cout << "Copied String : ";
        cout << d << endl;
}
