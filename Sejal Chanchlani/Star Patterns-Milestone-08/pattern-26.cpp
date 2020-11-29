//pattern-26
#include<iostream>
using namespace std;
int main()
{
	int n,k=65,x,y;
	cout<<"enter rows - "<<endl;
	cin>>n;
	y=k;
	for(int i=1;i<=n;i++)
	{
		x=k;
	
		for(int j=1;j<=i;j++)
		{
			
			cout<<(char)(x);
			x--;
		}
		k++;
		cout<<endl;
	}
}
