#include<iostream>
using namespace std;
int main()
{
	int i, j, m ;
	cout<<"enter the rows :";
	cin>>m;
	for(i=1;i<=m;i++)
	{ 
			for(j=1;j<=i;j++)
			{   if(i<=m/2)
				cout<<i;
				else
				cout<<m-i+1;
				
			}
			cout<<"\n";	
		}
	
}
