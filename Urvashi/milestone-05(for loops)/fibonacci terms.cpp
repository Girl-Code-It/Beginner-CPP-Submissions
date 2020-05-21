#include<iostream>
using namespace std;
int main()
{
int a, b , c, i, terms;
cout<<"enter number of terms"<<endl;
cin>>terms;
a=0;
b=1;
c=0;
cout<<"fibonacci terms:"<<endl;
for(i=1; i<=terms; i ++)	
{
	cout<<c<<endl;
	a=b;
	b=c;
	c=a+b;
}		
}
