//Write a C++ program to print all strong numbers between given interval using functions.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>

using namespace std;

void strong(int start,int num)
{ int sum,n,fact,temp;

	
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
	if (sum==k&&k>=start&&k<=num)
	cout<<k<<endl; }
	
}

int main()
{   int n,m ;
    cout<<"enter the starting and ending numbers"<<endl;
    cin>>m>>n;
    cout<<"strong numbers are"<<endl;
    strong(m,n); 
    
	getch();
	return 0;
	
}
