//count frequency of each element in array

#include<fstream>       //  cin,cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int main()
{
	int a[5],i,j,count;
	
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
		    b[j]=0; }
		}
		
		if(b[i]!=0)
		  b[i]=count;
		
	  }
	  cout<<"FREQUENCY OF ELEMENTS"<<endl;
	  for(i=0;i<5;i++)
	  {
	    if(b[i]!=0)
	    cout<<a[i]<<" occurs "<<b[i]<<" times "<<endl;
	  }
	  getch();
	  return 0;
	
}
