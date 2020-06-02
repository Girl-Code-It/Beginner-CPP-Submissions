//Given a matrix, clockwise rotate elements in it K times. Rotating the matrix by 90 degrees clockwise will be counted as 1.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void rotatemat(int a[3][3],int n,int m)
{  int temp;int N=n;
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			temp=a[i][j];
			a[i][j] = a[N - 1 - j][i]; 
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
            a[j][N - 1 - i] = temp; 
		}
		
	}
	
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{  
		   cout<<a[i][j]<<" ";
		}
		cout<<endl;
    }
}

int main()
{   int n,m,a[3][3],k;
	cout<<"Enter dimensions of array  "<<endl;
    cin>>n>>m;
     
	cout<<"enter elements of array "<<endl;
	for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	   
	   	cin>>a[i][j];
	 }
	 
	 cout<<"enter the number of times u want to rotate the matrix ";
	 cin>>k;
	 
	 for(int i=1;i<=k;i++)
	 rotatemat(a,n,m);
	 
	 
	 getch();
	 return 0;
	 
}
