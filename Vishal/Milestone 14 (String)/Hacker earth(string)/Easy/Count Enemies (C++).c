#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='X')
            {
                while(str[i+1]!='*' && str[i+1]!='X' && i+1<=str.size()-1)
                {
                    str[i+1]='K';
                    i=i+1;
                }
            }

        }
        reverse(str.begin(),str.end());
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='X')
            {
                while(str[i+1]!='*' && str[i+1]!='X' && i+1<=str.size()-1)
                {
                    str[i+1]='K';
                    i=i+1;
                }
            }

        }
        int c=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='O')
                c++;
        }
        cout<<c<<endl;
    }
}

