#include <iostream>

using namespace std;
int gcd(int n1,int n2,int val)
{
    cout<<"d"<<endl;
    if(val>1)
    {
        cout<<"s"<<endl;
        if(n1%val==0 && n2%val==0)
        {
            return val;
        }
        
        return gcd(n1,n2,val-1);
    }
    return 0;
}

int main()
{
    int n1,n2;
    cout<<"enter first number"<<endl;
    cin>>n1;
    cout<<"enter second number"<<endl;
    cin>>n2;
    int val;
    if(n1>n2)
    {
        val=n1;
    }
    else{
       val=n2;
    }
    int x=gcd(n1,n2,val);
    cout<<"GCD of"<<n1<<"and"<<n2<<"is "<<x;
}

