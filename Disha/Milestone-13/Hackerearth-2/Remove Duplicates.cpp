using namespace std;
#include<iostream>
int main()
{
    string s,str="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        int pos=str.find(s[i],0);
        if(pos==-1)
        {
            str+=s[i];
        }
    }
    s=str;
    cout<<s;
    return 0;
}
