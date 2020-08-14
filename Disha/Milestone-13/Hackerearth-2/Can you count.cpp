using namespace std;
#include<iostream>
int main()
{
    long long t,i,j,len,pos;
    string s,str;
    cin>>t;
    cin.ignore(256,'\n');
    for(i=0;i<t;i++)
    {
        len=1;
        str="";
        getline(cin,s);
        for(j=0;j<s.length();j++)
        {
            if(s[j]=='a'|| s[j]=='e'||s[j]=='i'|| s[j]=='o'||s[j]=='u')
            {
                pos=str.find(s[j],0);
                if(pos==-1)
                    str+=s[j];
            }
            if(s[j]=='_')
            {
                len*=str.length();
            }
        }
        pos=s.find('_',0);
        if(pos==-1)
        {
            len=1;
        }
        cout<<len<<endl;
    }
    return 0;
}
