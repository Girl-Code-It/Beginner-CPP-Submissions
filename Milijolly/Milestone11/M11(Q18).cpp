//Pass a 2D array to function and access all its elements. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

void display(int arr[2][2])
{
	for(int i=0;i<2;i++)
	{   for(int j=0;j<2;j++)
	
	      cout<<arr[i][j]<<" ";}
	
}

int main()
{ int a[2][2],i,j;
     cout<<"Enter element of an array "<<endl;
  	for(i=0;i<2;i++)
	{   for( j=0;j<2;j++)
	
	      cin>>a[i][j];
		  cout<<endl;  }
	
	display(a);
	
	getch();
	return 0;
}



