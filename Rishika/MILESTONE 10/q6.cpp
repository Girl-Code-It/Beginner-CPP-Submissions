//I-Q6-wap to print the largest number out of three numbers entered by the user.
#include<iostream>
using namespace std;
int lar(int,int,int);
int main()
{
	int a,b,c,max;
	cout<<"Enter three numbers to be compared = ";
	cin>>a>>b>>c;
	max=lar(a,b,c);
	cout<<"The largest number is = "<<max;
}int lar(int x,int y,int z)
{
	if(x>y&&x>z)
	{
		return(x);
	}else if(y>x&&y>z)
	{
		return(y);
	}else
	{
		return(z);
	}
}
