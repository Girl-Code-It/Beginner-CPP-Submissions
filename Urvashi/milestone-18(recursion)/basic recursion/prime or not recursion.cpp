#include<iostream>
using namespace std;
int i;
int prime(int n)
{
if(i==1)
return 1 ;
else if(n%i==0)
return 0;
i=i-1;
prime(n);	
}
int main()
{
int n,isprime;
cin>>n;
i=n/2;
 isprime=prime(n);
 if(isprime==1)
 cout<<n<<"is prime"<<endl;
 else
 cout<<n<<"is composite"<<endl;
}
