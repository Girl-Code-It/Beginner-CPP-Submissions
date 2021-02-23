//28
#include<iostream>
using namespace std;
int main() 
{
	int i,j,k=0,p;
	p=k;
	for(i=1;i<=5;i++)
	{   
	if(i%2!=0)
	{
		k=k+1;
	}else if(i==2)
	{
		k=k+2;
	}else if(i==4)
	{
		k=k+6;
	}
		for(j=1;j<=9;j++)
		{
			if(j<=2*i-1)
			{
				if(j%2==0)
				{
					cout<<"*";
				}else
				{
					cout<<k;
				}
			}
			
	}
	cout<<endl;
	
   }
}
