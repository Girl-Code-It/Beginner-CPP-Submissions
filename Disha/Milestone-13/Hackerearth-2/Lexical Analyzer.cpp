
using namespace std;
#include<iostream>
int main()
{
    long long N,i,num=0,j;
    string s[100],a="";
    cin>>N;
    cin.ignore(1000,'\n');
    for(i=0;i<N;i++)
    {
        getline(cin,s[i]);
    }
    for(i=0;i<N;i++)
    {
        string str=s[i].substr(0,s[i].find('=',0));

        if(a.find(str,0)==-1)
        {
            a+=str;
            a+=' ';
            num++;
        }

    }
    cout<<num<<endl;

    return 0;
}
