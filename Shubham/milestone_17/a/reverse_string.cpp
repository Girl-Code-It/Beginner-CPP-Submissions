#include<iostream>
#include<string.h>

using namespace std;
//reverse a string
int i=0;
void reverse(char* S, int n)
{
        if(i<=n)
        {
                char temp = S[n];
                S[n] = S[i];
                S[i] = temp;
                i++;
                reverse(S, n-1);
        }
}

int main()
{
        char s[100];
        cout << "Enter a string \n";
        cin >> s;
        int length = strlen(s);
        reverse(s, length-1);
        cout << s << endl;
}
