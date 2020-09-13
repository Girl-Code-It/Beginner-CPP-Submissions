using namespace std;
#include<iostream>
int main()
{
    int t;
    string s,str;
    cin>>t;
    cin.ignore(256,'\n');
    for(int i=0;i<t;i++)
    {
        str="";
        getline(cin,s);
        for(int j=s.length()-1;j>=0;j--)
        {
            str+=s[j];
        }
        cout<<str<<endl;
    }
    return 0;
}
