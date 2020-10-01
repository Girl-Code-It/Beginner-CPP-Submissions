using namespace std;
#include<iostream>
int main()
{
    int t;
    long long num,i,j,k,var;
    string s;
    cin>>t;
    cin.ignore(256,'\n');

    for(i=0;i<t;i++)
    {
        getline(cin,s);
        num=var=0;
        int pos=s.find('&',0);
        int pos1=s.find('$',0);
        if(pos==-1 && pos1==-1)
        {
            cout<<num<<endl;
        }
        else
        {
            for(j=0;j<s.length();j++)
            {
                if(s[j]=='&' || s[j]=='$')
                {
                    num=num+(s.length()-j);
                    num=num+((s.length()-j)*var);
                    var=0;

                }
                else
                {
                    var++;
                }

            }
            cout<<num<<endl;
        }

    }
    return 0;
}
