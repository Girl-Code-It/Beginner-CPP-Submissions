//Program to calculate all duplicate elements of array

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[5],i,j,count,sum=0;
	
	cout<<"Enter the 5 elements of an array "<<endl;
  	
	for(i=0;i<5;i++)
	cin>>a[i];
	
	int b[]={-1,-1,-1,-1,-1};
	
	for(i=0;i<5;i++)
	  {  count=1;
			for(j=i+1;j<5;j++)  
			{  
		   		if(a[i]==a[j])
		   		 {
		    		count++;
		    		b[j]=0;   }
			}
		
		if(b[i]!=0)
		  b[i]=count;
		
	  }
	  
	  cout<<"NO OF DUPLICATE ELEMENTS ARE "<<endl;
	  	for(i=0;i<5;i++)
	  	{
	    	if(b[i]>1)
	    	sum+=b[i]-1;
	  	}
	  cout<<sum;
	  getch();
	  return 0;
	
}
