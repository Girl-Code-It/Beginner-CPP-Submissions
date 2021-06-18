//alternate rectangle of Xs and Os
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int i,j,m,n;
	cin>>m>>n;
	int k=0,l=0;
	char a[m][n],x='X';
	int r=m,c=n;
	if(n>=1&&n<=1000&&m>=1&&m<=1000){
	while(k<m &&l<n){
		for(i=l;i<n;i++)
		{
			a[k][i]=x;
		}k++;
		for(i=k;i<m;i++)
		{
			a[i][n-1]=x;
		}n--;
		for(i=n-1;i>=l;i--)
		{
			a[m-1][i]=x;
		}m--;
		for(i=m-1;i>=k;i--)
		{
			a[i][l]=x;
		}l++;
		if(x=='X')
		{
			x='0';
		}else
		{
			x='X';
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c-1;j++)
		{
			cout<<a[i][j]<<" ";
		}cout<<a[i][j]<<endl;
	}
}
}
