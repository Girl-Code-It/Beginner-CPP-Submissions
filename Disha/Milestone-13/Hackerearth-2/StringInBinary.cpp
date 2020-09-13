using namespace std;
#include<iostream>
int main()
{
    int i,j,k,test,n;
    long long total=0;
    string s;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        cin.ignore(256,'\n');
        getline(cin,s);
        total=0;
        for(j=0;j<s.length();j++)
        {
            if(s[j]=='1')
            {
                for(k=j+1;k<s.length();k++)
                {
                    if(s[k]=='1')
                        total++;
                }
            }
        }
        if(s.length()==1 && s[0]=='1')
            total++;
        cout<<total<<endl;
    }
    return 0;
}
