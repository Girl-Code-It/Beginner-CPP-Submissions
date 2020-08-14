//Capicua

using namespace std;
#include<iostream>
int main()
{
    long long num[1000000],rem,siz,i,n;
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<siz;i++)
    {
        rem=0;
        n=num[i];
        while(n!=0)
        {
            rem=(rem*10)+(n%10);
            n/=10;
        }
        if(rem==num[i])
        {
            cout<<"YES";
            if( i<siz-1)
            {
                cout<<endl;
            }

        }
        else
        {
            cout<<"NO";
            if(i<siz-1)
                cout<<endl;
        }
    }
    return 0;
}
