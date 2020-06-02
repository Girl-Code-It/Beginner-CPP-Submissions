/*Take an array of length n where all the numbers are nonnegative and unique.
 Find the element in the array possessing the highest value. 
 Split the element into two parts where first part contains the next highest value in the array and 
 second part hold the required additive entity to get the highest value. 
Print the array where the highest value get splitted into those two parts.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[5],b[6],max,max2,i,k=0,num=5,temp;


 cout<<"enter elements of array"<<endl; 
 for(i=0;i<num;i++)	
    cin>>a[i];
    
 max=a[0]; max2=a[0];
 for(i=0;i<num;i++)  
 {
 	if(max<a[i])
 	 {
 	   max=a[i]; k=i;}
 }
 for(i=0;i<num;i++)	
   {
        if(a[i]<max&&a[i]>max2)
 	  {
 	   max2=a[i]; }
  }
    
    

for(i=0;i<num+1;i++)
   {
    if(i<k)
    b[i]=a[i];
	
	if (i==k) 
	{
	b[k]=max2;
	b[k+1]=max-max2; }
	
	if(i>=k+2)
	b[i]=a[i-1];
	
	
   }
   
  cout<<"NEW ARRAY"<<endl; 
   for(i=0;i<num+1;i++)
    cout<<b[i]<<" ";
	
	getch();
	return 0;

}
	
