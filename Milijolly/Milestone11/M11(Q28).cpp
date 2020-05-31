//to delete an element from specified position

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[6],i,k,num,flag=0,n=5;
	
	cout<<"Enter the 5 elements of an array "<<endl;
  	
	for(i=0;i<5;i++)
	  cin>>a[i];  
	  
	cout<<"Enter thE ELEMENT you want to DELETE "<<endl;
	cin>>num;
	
	
	for(i=0;i<5;i++)
	{   
	  if(a[i]==num)
	 {  k=i;
	   flag=1;
	   break;  }  
	 }
    
    if(flag=0)
    cout<<"Value not found "<<endl;
    
	else
	{
	 for(int j=k;j<5;j++)
       a[j]=a[j+1];
    }
    
    for(i=0;i<4;i++)
    cout<<a[i]<<" ";
    
    
	  getch();
	  return 0;
	  
	  
	  
}
