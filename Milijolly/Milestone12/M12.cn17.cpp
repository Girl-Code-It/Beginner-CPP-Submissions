/*Given a matrix of size M x N, there are large number of queries to find submatrix sums. 
Inputs to queries are left top and right bottom indexes of submatrix whose sum is to find out.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void query(int arr[4][4],int b,int c,int d,int e)
{  int sum=0;
	for(int i=b;i<=d;i++)
	{ 
	  for(int j=c;j<=e;j++)
	  {
	  	sum+=arr[i][j];
	  }
	
	}
	cout<<sum<<"  ";
	cout<<endl;
}
int main()
{
	int n,i,j,a[4][4],k,b,c,d,e,m;
    cout<<"Enter the no. of rows "<<endl;
	cin>>m;
	cout<<"Enter the no. of cols "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
	cout<<"array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
    
    cout<<" Enter the number of queries " <<endl;
    cin>>k;
    
    cout<<"enter values for query"<<endl;
    for(i=1;i<=k;i++)
    {  cout<<i<<": "<<endl;
	   cin>>b>>c>>d>>e;
       query(a,b,c,d,e);
       cout<<endl;
    }
    getch();
    return 0;
}
	

