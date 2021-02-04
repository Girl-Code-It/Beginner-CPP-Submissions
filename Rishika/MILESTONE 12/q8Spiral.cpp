//q8- Print 2D array in clockwise spiral order.
#include<iostream>
using namespace std;
int spiral(int a[][10],int m,int n)
{
	int i,k=0,l=0;
	while(k<m && l<n)
	{
		for(i=l;i<n;i++)
		{
			cout<<a[k][i]<<" ";
		}k++;
		for(i=k;i<m;i++)
		{
			cout<<a[i][n-1]<<" ";
		}n--;
		for(i=n-1;i>=l;i--)
		{
			cout<<a[m-1][i]<<" ";
		}m--;
		for(i=m-1;i>=k;i--)
		{
			cout<<a[i][l]<<" ";
		}l++;
	}
}
int main()
{
	int a[10][10]={{2,4,6,8},{5,9,12,16},{2,11,5,9},{3,2,1,8}},i,j;
	cout<<"Array : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"Array in Spiral order(clockwise) : "<<endl;
	spiral(a,4,4);
}

