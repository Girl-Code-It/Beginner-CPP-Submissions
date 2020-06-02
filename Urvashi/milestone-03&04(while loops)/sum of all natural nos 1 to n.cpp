#include<iostream>
using namespace std;
int main()
{
int num ,n, sum=0;
cout<<"enter the upper limit:";
cin>>n;
for	(num=1; num<=n ;num++)
{
	sum+=num;	
}
	cout<<"sum of first n natural numbers is "<<sum<<endl;
}
