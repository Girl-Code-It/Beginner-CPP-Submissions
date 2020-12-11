//problem-01-12
#include<iostream>
using namespace std;
void input_elements(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>*((a+i*n)+j);
		}
	}
}
void display(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<*((a+i*n)+j)<<" ";
		}
		cout<<endl;
	}
}
void sum_matrix(int *a,int n,int m)
{
	int sum;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			sum=sum+*((a+i*n)+j);
		}
		
	}
	cout<<"sum of matrix is - "<<sum<<endl;
}
void sum_row(int *a,int n,int m)
{
	int sum;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
		{
			sum=sum+*((a+i*n)+j);
		}
		cout<<"Sum of row "<<i<<" is "<<sum<<endl;
	}
}
void sum_column(int *a,int n,int m)
{

	int sum;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<m;j++)
		{
			sum=sum+*((a+j*n)+i);
		}
		cout<<"Sum of column "<<i<<" is "<<sum<<endl;
	}
}
void transpose(int *a,int n,int m)
{
	int b[n][m];
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<m;j++)
		{
			b[j][i]=*((a+i*n)+j);
		}
	
	}
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<m;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	
	}
}
int main()
{
	int n,m,choice;
	cout<<"enter rows - "<<endl;
	cin>>n;
	cout<<"enter columns - "<<endl;
	cin>>m;
	int a[n][m];
	cout<<"1- Sum of all elements of matrix of size m x n"<<endl;
	cout<<"2- To display row-wise sum of matrix of size m x n"<<endl;
	cout<<"3- To display column-wise sum of matrix of size m x n"<<endl;
	cout<<"4- To create transpose of matrix B of size n x m"<<endl;
	cout<<"enter your choice - 1,2,3,4"<<endl;
	cin>>choice;
	input_elements((int *)a,n,m);
	display((int *)a,n,m);
	switch(choice)
	{
	
		case 1:
			{
				sum_matrix((int *)a,n,m);
				break;
			}
		case 2:
			{
				sum_row((int *)a,n,m);
				break;
			}
		case 3:
			{
				sum_column((int *)a,n,m);
				break;
			}
		case 4:
			{
				transpose((int *)a,n,m);
				break;
			}
	}


}
