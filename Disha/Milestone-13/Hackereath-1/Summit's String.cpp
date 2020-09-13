#include<iostream>
using namespace std;
int main()
{
    int i,n,flag;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        flag=0;
        cin>>s;
        for(int j=0;j<s.length()-1;j++)
        {
            if(abs(s[j]-s[j+1])!=1)
            {
                if((s[j]=='a'&& s[j+1]=='z') || (s[j]=='z'&& s[j+1]=='a') )
                    continue;
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else if(flag==1)
            cout<<"NO"<<endl;
    }
    return 0;
}
