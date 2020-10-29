//Pallindrome string

using namespace std;
#include<iostream>
int main()
{
    int t,i,j,k,flag=0;
    string s;
    cin>>t;
    cin.ignore(256,'\n');
    for(i=0;i<t;i++)
    {
        flag=0;
        getline(cin,s);
        for(j=0,k=s.length()-1;j<=s.length()/2;j++,k--)
        {
            if(s[j]!=s[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==1)
            cout<<"NO"<<endl;
    }
    return 0;
}
