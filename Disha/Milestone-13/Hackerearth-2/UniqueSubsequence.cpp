using namespace std;
#include<iostream>
int main()
{
    long long test,i,j,num,T,N;
    string s;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>N;
        cin.ignore(256,'\n');
        getline(cin,s);
        T=1;
        for(j=1;j<s.length();j++)
        {
            if(s[j]!=s[j-1])
                T++;
        }
        cout<<T<<endl;
    }
    return 0;
}
