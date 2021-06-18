#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
    int main()
    {
        int t,i;
        string s;
        cin>>t;
        for(i=0;i<=t;i++)
        {
            getline(cin,s);
            for(int j=0;j<s.length();j++)
            {
                if(s[j]>=65 && s[j]<=90)
                {
                   cout<<s[j]-64;
                }
                else if(s[j]>=97 && s[j]<=122)
                {
                    cout<<s[j]-96;
                }
                else if(s[j]==' ')
                {
                    cout<<"$";
                }
            }
    		cout<<endl;
        }
        return 0;
    }

