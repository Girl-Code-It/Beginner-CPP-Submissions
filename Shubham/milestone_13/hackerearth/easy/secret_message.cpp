#include<iostream>
#include<string>

using namespace std;

int main()
{
    //encryption of message
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, letter, num;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                letter = k%26;
                s[i] = s[i] + letter;
                if(s[i] > 90)
                {
                    int d = s[i]-90;
                    s[i] = 64+d;
                }
            }

            else if(s[i]>='a' && s[i]<='z')
            {
                letter = k%26;
                int x = (int)s[i];
                x += letter;
                if(x <= 122)
                    s[i] = (char)x;
                
                else
                {
                    int d = x - 122;
                    s[i] = (char)(96+d);
                }
            }            
            else if(s[i]>='0' && s[i] <= '9')
            {
                num = k%10;
                int x = (int)s[i];
                x += num;
                if(x <= 57)
                {
                    s[i] = x;
                }
                else
                {
                    int d = x - 57;
                    s[i] = 47+d;
                }
                
            }
        }
        cout << s << endl;
    }
}
