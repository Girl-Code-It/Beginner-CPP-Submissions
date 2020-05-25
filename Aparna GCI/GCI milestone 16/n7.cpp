#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int t,suv,su,i,j;
    string s;
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        suv=su=0;
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='S'&&s[j+1]=='U'&&s[j+2]=='V'&&s[j+3]=='O'&&s[j+4]=='J'&&s[j+5]=='I'&&s[j+6]=='T')
            {
                suv++;
                s.replace(j,7,"*");
            }
        }
        for(j=0;s[j]!='\0';j++)
        {
             if(s[j]=='S'&&s[j+1]=='U'&&s[j+2]=='V'&&s[j+3]=='O')
            {
                su++;
            }
        }
        cout<<"SUVOJIT : "<<suv<<endl;
        cout<<"SUVO : "<<su<<endl;
    }
    return 0;
}
