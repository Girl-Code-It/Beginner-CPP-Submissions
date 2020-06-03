//selection sorting

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

void selection(int arr[],int n)
{
	int min,temp,k;
	
	for(int i=0;i<n-1;i++)
	{
		min=arr[i];
		k=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{ min=arr[j];
			  k=j;
			}
				
		}	
		temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;	
	}	
	
}

int main()
{
  int a[10],num;
  
  cout<<"enter no of elements of array "<<endl;
  cin>>num;
    
	for(int i=0;i<num;i++)	
	  cin>>a[i];
	  
 selection(a,num); 
 cout<<"Using Selection Sort "<<endl;
 for(int i=0;i<num;i++)	
	  cout<<a[i]<<" ";
 
 	  
getch();
return 0;	
	
}
