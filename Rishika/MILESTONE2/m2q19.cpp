//q19- wap to print sum of all even numbers
#include<iostream>
using namespace std;
int main()
{
	int n,i,s=0;
	cout<<"enter the upper limit n= ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{s=s+i;
		}
	}
	cout<<"the sum is= "<<s;
}
