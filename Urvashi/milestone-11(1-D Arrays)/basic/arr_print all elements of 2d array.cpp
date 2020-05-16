#include<iostream>
using namespace std;
int main()
{
	int array[100][100], i, m ,j, n;
	cout<<"enter the rows and colums of the array:"<<endl;
	cin>>m>>n;
	cout<<"enter the elements in the 2D array:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<"the array is="<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<array[i][j]<<" ";
		}
	}
}
