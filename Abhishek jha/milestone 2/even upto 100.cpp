#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"enter the number upto which even number have to print"<<endl;
	cin>>n;

	while(i<=n)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
		i++;
      
	}
	return 0;
}
