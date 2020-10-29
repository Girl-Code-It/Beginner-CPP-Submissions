#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int l_curly=0, r_curly=0, l_square=0, r_square=0, l_small=0, r_small=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '{') l_curly++;
            else if(s[i] == '}') r_curly++;
            else if(s[i] == '[') l_square++;
            else if(s[i] == ']') r_square++;
            else if(s[i] == '(') l_small++;
            else if(s[i] == ')') r_small++;
        }

        //finding the possible pairs

        //1.

        int curly = (l_curly < r_curly) ? l_curly : r_curly;
        int square = (l_square < r_square) ? l_square : r_square;
        int small = (l_small < r_small) ? l_small : r_small;
        
        cout << 2*(curly+square+small) << endl;

    }
}
