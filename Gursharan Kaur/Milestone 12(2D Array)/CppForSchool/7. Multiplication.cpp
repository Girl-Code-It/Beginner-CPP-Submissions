#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{   int n,l,m;

    int a[n][l],b[l][m],c[n][m];

    cout<<"Enter dimensions of array A "<<endl;
    cin>>n>>l;

	cout<<"enter a array A "<<endl;
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<l;j++)
       cin>>a[i][j];
	}

    cout<<"Enter dimensions of array B "<<endl;
    cin>>l>>m;

    cout<<"enter a array B "<<endl;
	for(int i=0;i<l;i++)
    {
	   for(int j=0;j<m;j++)
	   cin>>b[i][j];
    }

	cout<<"Multiplication of 2 arrays "<<endl;

	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	    {
	      c[i][j]=0;
	      for(int k=0;k<l;k++)
	      c[i][j]+=a[i][k]*b[k][j];
	    }
	 }

	 for(int i=0;i<n;i++)
	 {
	    for(int j=0;j<m;j++)
	    cout<<c[i][j]<<" ";
	    cout<<endl;
	 }

	 getch();
	 return 0;

}

