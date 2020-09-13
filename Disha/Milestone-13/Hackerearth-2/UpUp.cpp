using namespace std;
#include<iostream>
 int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ' && (s[i+1]>=97 && s[i+1]<=122))
        {
            s[i+1]=s[i+1]-32;
        }
        else if(i==0 && (s[i]>=97 && s[i]<=122))
        {
            s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
}
