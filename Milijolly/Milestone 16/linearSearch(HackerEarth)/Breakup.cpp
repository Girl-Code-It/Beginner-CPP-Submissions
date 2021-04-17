#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,twenty=0,nineteen=0,other=0;
    cin>>n;
    while(n--)
    {
        string s; 
        getline(cin,s);

        if(s[0]=='G'){
            for(i=0; s[i]!='\0'; i++)
            {
                if((s[i]=='2') && (s[i+1]=='0'))              
                    twenty+=2;
             
                else if ((s[i]=='1') && (s[i+1]=='9') )              
                    nineteen+=2;
                
                else if ((s[i]>'2') && (s[i]<'9' ))              
                    other+=2;
                
            }

        }
        if(s[0]=='M'){
            for(i=0;s[i]!='\0';i++)
            {
                if((s[i]=='2') && (s[i+1]=='0'))              
                    twenty+=1;
             
                else if ((s[i]=='1') && (s[i+1]=='9') )              
                    nineteen+=1;
                
                else if ((s[i]>'2') && (s[i]<'9' ))              
                    other+=1;
            }

        }

    }
    if((twenty>other) ||(nineteen>other))
        cout<<"Date";
        
    else if((twenty==nineteen))
        cout<<"No Date";
        
    else
        cout<<"No Date";
}

