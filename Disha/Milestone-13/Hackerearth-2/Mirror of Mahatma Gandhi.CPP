using namespace std;
#include<iostream>
int main()
{
    int t,i,j,k,flag;
    string s;
    cin>>t;
    cin.ignore(256,'\n');
    for(i=0;i<t;i++)
    {
        getline(cin,s);
        flag=0;
        for(j=0,k=s.length()-1;j<=s.length()/2;j++,k--)
        {
            if(s[j]=='0' || s[j]=='1' || s[j]=='8')
            {
                if(s[j]!=s[k])
                {
                    flag=1;
                    break;
                }

            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
