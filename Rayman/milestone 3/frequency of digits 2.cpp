#include <iostream>
using namespace std;
int main()
{
  long long int num, ld, ct=0, n=0, a;
    cout<<"enter a number : "<<endl;
    cin>>num;
    a=num;
    for(n=0; n<10; n++)
    {   ct=0;
        a=num;
        while(a>0)
        {
          ld=a%10;
        if (ld==n)
        {
            ct++;
        }
        a=a/10;
        }
     cout<<"frequency of "<<n<<" is : "<<ct<<endl;
     ct=0;
     }
}

/*
alternative :
#include <iostream>
using namespace std;
int main()
{
    long long int num, n, ct, ld, m;
    cout<<"enter a number : "<<endl;
    cin>>num;
    n=0;
    while(n<10)
    {
        ct=0;
        cout<<"the frequency of "<<n<<" is : ";
        for(m=num; m>0; m=m/10)
        {
            ld=m%10;
            if(ld==n)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
        n++;
    }
}
*/
