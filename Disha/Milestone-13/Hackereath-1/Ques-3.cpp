//VowelPhobia

using namespace std;
#include<iostream>

int main()
{
    int t,i,num;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        num=0;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' ||s[j]=='o' || s[j]=='u')
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
