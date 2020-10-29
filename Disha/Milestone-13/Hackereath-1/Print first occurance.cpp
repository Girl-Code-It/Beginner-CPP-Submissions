using namespace std;
#include<iostream>
int main()
{
    int t;
    string s,str;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        str="";
        for(int j=0;j<s.length();j++)
        {
            int pos=str.find(s[j],0);
            if(pos==-1)
            {
                str+=s[j];
            }
        }
        cout<<str<<endl;
    }
    return 0;
}

