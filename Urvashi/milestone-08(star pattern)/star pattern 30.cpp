#include<iostream>
using namespace std;
int main ()
{
int i, j, n ;
cout<<"enter the no of rows:"<<endl;
cin>>n;
for(i=0; i<n/2 ; i++)
{
	for(j=1; j<=2*n-1; j++)
	{
		if((j>=n/2+1-i && j<=(n+1)+i) || (j>=(2*n+2)-i && j<=3*n+i))
		cout<<"*";
		else
        cout<<" ";
}	cout<<"\n";

	}	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=2*n-1;j++)
		{
			if(j>=i&& j<=(2*n-1)-i)
			cout<<"*";
			else
			cout<<" ";
		}	cout<<"\n";
			}
	return 0;
}
