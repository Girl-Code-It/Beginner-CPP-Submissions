#include<iostream>
using namespace std;
int no_of_steps(long int a,long int b,long int c)
{
	int steps=0;
    if(a>=b)
    return (a-b)/2 +(a-b)%2;
    else if(b%c==0)
    return 1+no_of_steps(a,b/c,c);
    else
    {	
    int d=((b/c)+1)*c ;
    return no_of_steps(a,d,c)+(d-b)/2 +(d-b)%2 ;
	}
}

int main()
{
int t;
cin>>t;
int a,b,c;
while(t--)
{
cin>>a>>b>>c;
cout<<no_of_steps(a,b,c);
}	
}
