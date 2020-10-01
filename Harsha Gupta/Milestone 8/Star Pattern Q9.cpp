#include<iostream>
using namespace std;

int main()
{ 
    int i,j,k;
    for(i=1;i<=4;i++)
    {
    	k=65;
    	for(j=1;j<=7;j++)
    	{
    		if(j<=5-i || j>=3+i)
    		{
    			cout<<(char)k;
    			j<4?k++:k--;
			}
			else
			{
				cout<<" ";
				if(j==4)
				  k--;
			}
		}
		cout<<endl;
	}
	return 0;
}
