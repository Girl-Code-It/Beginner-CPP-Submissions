using namespace std;
#include<iostream>
#include<Cctype>
#include<cstring>
#include<ctype.h>
#include<bits/stdc++.h>
bool isprime(int k)
{
    bool flag=1;
    for(int i=2;i<=k/2;i++)
    {
        if(k%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

char check(int lower, int upper,char s)
{
    int k,pnear=0,snear=0;
    for(k=s;k>=lower;k--)
    {
        if((k>=65 && k<=90) || (k>=97 && k<=122))
        {
            if(isprime(k))
            {
            pnear=k;
            break;
            }
        }
    }
    for(k=s;k<=upper;k++)
    {
        if((k>=65 && k<=90) || (k>=97 && k<=122))
        {
           if(isprime(k))
            {
            snear=k;
            break;
            }
        }

    }

    int num=s;

    if(pnear==0)
    {
        s=snear;
    }
    else if(snear==0)
    {
        s=pnear;
    }
    else if( (num-pnear) <= (snear-num))
    {
        s=pnear;
    }
    else
        s=snear;
    return s;
}

int main()
{
    long long test,i,j,N;
    string s;
    cin>>test;

    for(i=0;i<test;i++)
    {
        cin>>N;
        cin.ignore(256,'\n');
        getline(cin,s);
        for(j=0;j<s.length();j++)
        {
            if(isprime(s[j]) &&((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122)))
            {
                continue;
            }
            else
            {
                s[j]=check(0,255,s[j]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
