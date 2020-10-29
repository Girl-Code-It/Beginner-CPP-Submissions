//Write a C++ menu driven program
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void inputarr(int a[3][3],int m,int n)
{  cout<< "Enter a 2D array"<<endl;
	
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	   
	   	cin>>a[i][j];
	 }
}

void outputarr(int a[3][3],int m,int n)
{  
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	   cout<<a[i][j];
	   cout<<endl;
	 }
}

void sumarr(int a[3][3],int m,int n)
{  int sum=0;
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	   
	   	sum+=a[i][j];
	 }
	cout<<"Sum is "<<sum; 
}

void rowarr(int a[3][3],int m,int n )
{  int sum;
	for(int i=0;i<m;i++)
	 {  sum=0;
	   for(int j=0;j<n;j++)
	   
	   	sum+=a[i][j];
	   	cout<<"Row Sum is "<<sum; 
	 }
	 
}

void colarr(int a[3][3],int m,int n)
{  int sum;
	for(int j=0;j<n;j++)
	 { sum=0;
	   for(int i=0;i<m;i++)
	   
	   	sum+=a[i][j];
	   	cout<<"Col Sum is "<<sum; 
	 }
	 
}

void transparr(int a[3][3],int m,int n)
{  
    int b[3][3];
	for(int i=0;i<m;i++)
	 {
	   for(int j=0;j<n;j++)
	    b[j][i]=a[i][j];
	
	 }
	 
  cout<<"Transpose of the array B"<<endl;	 
	 for(int i=0;i<n;i++)
	 {
	   for(int j=0;j<m;j++)
	     cout<<b[i][j]<<" ";
	     cout<<endl;
	
	 }
}
int main()
{   int num,x=3,y=3,arr[3][3]; char ch='y';
	
	while(ch=='y'||ch=='Y')
	{
	cout<<"Enter one number for the following tasks"<<endl;
	cout<<"1.input element of 2D array"<<endl;
	cout<<"2.output elements of 2D array"<<endl;
	cout<<"3.Sum of elements of 2D array"<<endl;
	cout<<"4.Display Row wise sum of 2D array"<<endl;
	cout<<"5.Display column wise of 2D array"<<endl;
	cout<<"6.Create transpose of matrix 2D array"<<endl;
	cin>>num;
	
	switch(num)
	{ case 1: inputarr(arr,x,y);break;
	  case 2: outputarr(arr,x,y);break;
	  case 3: sumarr(arr,x,y);break;
	  case 4: rowarr(arr,x,y);break;
	  case 5: colarr(arr,x,y);break;
	  case 6: transparr(arr,x,y);break;
	}
	cout<<endl;
	cout<<"DO YOU STILL WANT TO RUN THE PROGRAM(y/n)"<<endl;
	cin>>ch;
     }
	getch();
	return 0;
}


