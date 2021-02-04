//q3-wap to swap the first and last digits.
#include<iostream>
using namespace std;
int main()
{
	int n,num,i;
	cout<<"Enter a number= ";
	cin>>n;
	while(n>10)
	{
		num=n%10;
		for(i=0;i<=10;i++)
		{
			cout<<"Frequency of "<<num<<"= "<<i<<endl;
		}
		n=n/10;
	}
}
