//q21- wap to print table of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,i,p=1;
	cout<<"enter the number= ";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		p=n*i;
	cout<<n<<" X "<<i<<" = "<<p<<endl;
    }
}
