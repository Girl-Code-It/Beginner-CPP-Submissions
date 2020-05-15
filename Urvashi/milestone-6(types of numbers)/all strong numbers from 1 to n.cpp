#include<iostream>
using namespace std;
int main()
{
int i , j, sum , end, fact , lastdigit, num;
cout<<"enter the upper limit:"<<endl;
cin>>end;
cout<<"all strong numbers between 1 to n are:"<<endl;
for(i=1;i<=end;i++)	
{	num=i;
	sum=0;
	while(num>0)
	{
		fact=1;
		lastdigit=num%10;
		for(j=1;j<=lastdigit;j++)
		{
			fact=fact*j;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==i)cout<<i<<endl;
}	
}
