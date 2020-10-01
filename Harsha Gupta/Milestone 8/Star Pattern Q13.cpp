#include<iostream>
using namespace std;

int main()
{ 
    int i,j;
    for(i=1;i<=4;i++)
    {
    	int k=i;
    	for(j=1;j<=7;j++)
    	{	
    		if(j>=5-i && j<=3+i)
    		{	
    			cout<<k;
    			j<4?k++:k--;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
