//16
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{   
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			{
				if(i==j||j==i-2)
				{
					cout<<"1";
				}else
				{
					cout<<"0";
				}
			}
	    }  
		cout<<endl;		
    }
}
