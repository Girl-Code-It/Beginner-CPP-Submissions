using namespace std;
#include<iostream>
int main()
{
    string s,a;
    while(getline(cin,s))
    {
        bool con=false;
        a="";

        for(int i=0;i<s.length();i++)
        {
            if(con)
            {
                a+=s[i];
                continue;
            }
            if(s[i]=='/' && s[i+1]=='/')
            {
                con=true;
                a+='/';
            }
            else if(s[i]=='-' && s[i+1]=='>')
            {
                a+='.';
                i++;
            }
            else
            {
                a+=s[i];
            }

        }
        cout<<a<<endl;
    }
    return 0;
}
