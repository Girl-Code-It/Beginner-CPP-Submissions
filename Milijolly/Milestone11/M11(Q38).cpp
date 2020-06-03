//program to left rotate an array n times 

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

void leftrotate(int arr[10])
{   
    int temp=arr[0];
	for(int i=0;i<10;i++)
	{   
	   arr[i]=arr[i+1];
	}
	
	arr[9]=temp;
		
}

int main()
{
    int a[10],i,N;
	
	cout<<"Enter the 10 elements of an array "<<endl;
  	
	for(i=0;i<10;i++)
	  cin>>a[i]; 
	  
	cout<<"enter number of rotations "<<endl;
	cin>>N;  
	
	for(int i=1;i<=N;i++)
	  leftrotate(a);
	
	for(i=0;i<10;i++)
	  cout<<a[i]<<" "; 
	  
	 getch();
	 return 0;		
	
}



