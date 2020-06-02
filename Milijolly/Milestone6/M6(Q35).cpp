//Write a C++ program to print all Strong numbers between 1-n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{ int sum,num,n,fact,temp;
	cout<<"enter a number "<<endl;
	cin>>num;
	
 for(int k=1;k<=num;k++)
  { sum=0;
    temp=k;
	while(temp>0)
   {
   	n=temp%10;
	fact=1;
	
	for(int i=1;i<=n;i++)
	{ fact=fact*i;
	}
	
	sum=sum+fact;
	temp=temp/10;
	} 
	if (sum==k)
	cout<<k<<endl; }
	
	getch();
	return 0;
}
