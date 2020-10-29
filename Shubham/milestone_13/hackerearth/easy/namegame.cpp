#include<iostream>
#include<string>

using namespace std;

int isPrime(int);
int nearest(char);
int main()
{
    int t;  
    cin >> t;

    while(t--)
    {
        int n;
        string s;

        cin >> n >> s;

        for(int i=0; i<n; i++)
        {
            s[i] = nearest(s[i]);
        }
        cout << s << endl;
    }
}

int nearest(char c)
{
    int s=0, l=0, o, sd, ld, s_limit, e_limit, flag1=0, flag2=0;



    if(c >= 'A' && c<='Z') 
        s_limit=65, e_limit=90;
    
    else if(c>='a' && c<='z')
        s_limit=97, e_limit=122;
    else
        {
            if(c<'A')   c='A', s_limit=65, e_limit=90;
            else if(c<'a' && c>'Z')
            {
                sd = abs(c-'a');
                ld = abs(c-'Z');

                c = (sd < ld) ? 'a' : 'Z';
                if(sd < ld)
                {
                    c = 'a';
                    s_limit=97, e_limit=122;
                }
                else
                {
                    c='Z';
                    s_limit=65, e_limit=90;
                }
                
            }
            else
            {
                c= 'z';
                s_limit=97, e_limit=122;
            }
            
            
        }
    //finding nearest prime number before c
    for(int i=c; i>= s_limit; i--)
    {
        if(isPrime(i))
        {
            s=i;
            flag1=1;
            break;
        }
    }
    sd = c-s;
    //finding nearest prime number after c

    for(int i=c; i<=e_limit; i++)
    {
        if(isPrime(i))
        {
            l=i;
            flag2=1;
            break;
        }
    }
    ld = l-c;
    if(flag1==0 && flag2==1)
        o=l;
    else if(flag1==1 && flag2==0)
        o=s;
    else
        o = (ld<sd) ? l : s;
    return o;
}

int isPrime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}
