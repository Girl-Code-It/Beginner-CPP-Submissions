using namespace std;
#include<iostream>
#include<algorithm>
bool compare(char a,char b)
{
    return a>b;
}

int main()
{
    long long t,i,j;
    string s,s1,good,worst;

    cin>>t;
    cin.ignore(256,'\n');

    for(i=0;i<t;i++)
    {
        s1=good=worst="";
       getline(cin,s);
       for(j=0;j<s.length();j++)
       {
           if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' )
           {
               s1+=s[j];
           }
       }
       good=s1;
       worst=s1;
       sort(good.begin(),good.end());
       sort(worst.begin(),worst.end(),compare);

       bool good_=1;

        for(j=0;j<s1.length();j++)
        {
            if(s1[j]!=good[j])
            {
                good_=0;
                break;
            }
        }
        if(good_)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            bool worst_=1;
            for(j=0;j<s1.length();j++)
            {
                if(s1[j]!=worst[j])
                {
                    worst_=0;
                    break;
                }
            }
            if(worst_)
            {
                cout<<"Worst"<<endl;
            }
            else
                cout<<"Bad"<<endl;
        }

    }
    return 0;
}
