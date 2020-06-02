#include <iostream>
using namespace std;
int main ()
{
int a, b,i,min,hcf=1;
cout<<"enter a and b"<<endl;	
cin>>a>>b;
min = (a<b)	?  a:b;
for(i=1; i<=min; i++)
{
	if(a%i==0 && b%i==0)
		hcf=i;
}
cout<<"hcf of a and b is"<<hcf<<endl;	
}
