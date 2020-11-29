//pattern-30
#include<iostream>
using namespace std;
int main()
{
	int n,count;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i=1;i<=3*n;i++)
	{
		for(int j=1;j<=2*n-1;j++)
		{
			if(i<=n)
			{
			       if(j>=2*n-i)
			       {
			       	cout<<"*";
				   }
				   else
				   {
				   	cout<<" ";
				   }
			}
			else if(i<=2*n){
				count=0;
				if(j==n)
				{
					cout<<"|";
					count=1;
				}
				if(j<=i-n-1)
				{
					count=1;
					cout<<"*";
				}
				if(j>=i)
				{
					cout<<"*";
					count=1;
				}

				if(count==0)
				{
					cout<<" ";
				}
			}
			else if(i<=3*n){
				if(j<=3*n+1-i)
				{
					cout<<"*";
				}
				else{cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}
