#include<iostream>
using namespace std;
int main()
{
int i, j ,end , sum=0;
cout<<"enter upper limit"<<endl;
cin>>end;
cout<<"all perfect numbers from 1 to n are:"<<endl;
for(i=1;i<=end;i++)
{
sum=0;
for(j=1; j<i; j++)
{
	if(i%j==0)
	sum+=j;
}	
if(sum==i)
cout<<i<<endl;	
}
}
