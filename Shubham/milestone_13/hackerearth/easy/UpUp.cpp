#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int letter=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            letter = 0;
        }
        else if(letter == 0)
        {
            if(s[i]>='a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
            letter=1;
        }
    }
    cout << s << endl;
}
