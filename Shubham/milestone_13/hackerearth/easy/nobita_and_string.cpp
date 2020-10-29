#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s, o[10000], temp;
        getline(cin, s);
        //storing string word wise in different string array
        int j=0;
        for(int i=0; i<s.length(); i++)
        {
            if(i == s.length()-1)
            {
                temp += s[i];
                o[j] = temp;
                break;
            }
            if(s[i] != ' ')
                temp += s[i];
            else if(s[i] == ' ')
            {
                o[j] = temp;
                j++;
                temp = "";
            }
        }

        int start=0, end=0;

        for(int i=0; i<10000; i++)
        {
            if(o[i] == "")
            {
                end = i-1;
                break;
            }
        }
        
        for(start=0; start <= end; start++, end--)
        {
            string temp = o[start];
            o[start] = o[end];
            o[end] = temp;
        }

        for(int i=0; o[i] != ""; i++)
        {
            cout << o[i] << " ";
        }
		cout << endl;
    }
}
