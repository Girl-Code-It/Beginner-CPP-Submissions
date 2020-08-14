using namespace std;
#include<iostream>
#include<string>
int main()
{
    int  t,upper,lower;
    string s;
    cin>>t;
    cin.ignore(1000,'\n');
    if(t>10 || t<1)
    {
        cout<<"Invalid Test"<<endl;
        return 0;
    }
    for(int i=0;i<t;i++)
    {
        getline(cin,s);
        lower=upper=0;
        if(s.length()>100)
        {
            cout<<"Invalid Input"<<endl;
            continue;
        }
        for(int j=0;j<s.length();j++)
        {
            if(s[j]>=65 && s[j]<=90)
                upper++;
            else if(s[j]>=97 && s[j]<=122)
                lower++;
        }
        if(lower==0 && upper==0)
            cout<<"Invalid Input"<<endl;

        else if((lower==0 && upper==1) || (lower==1 && upper==0))
            cout<<"0"<<endl;

        else if((lower==0 && upper !=0) || (lower>=upper))
            cout<<upper<<endl;

        else if((lower!=0 && upper ==0) || (lower<=upper))
            cout<<lower<<endl;

    }
    return 0;
}
