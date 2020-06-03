//Write a C++ program to check whether a number is Strong number or not

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{ int sum,num,n,fact,original;
	cout<<"enter a number "<<endl;
	cin>>num;
	
	original=num;
	sum=0;
	while(num>0)
   {
   	n=num%10;
	fact=1;
	
	for(int i=1;i<=n;i++)
	{ fact=fact*i;
	}
	
	sum=sum+fact;
	num=num/10;
	}
	if (sum==original)
	cout<<"it is a strong number"<<endl;
	
	else
	cout<<"not a strong number"<<endl;

getch();
return 0;	
}
	
	
	
	
	
	
	
	

