//31
#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,p;
	char l;
	for(i=1;i<=4;i++)
	{   p=1;
	    l='A';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i && k)
			{	if(i%2==0)
				{
					cout<<l;
					l++;
				}else
				{
					cout<<p;
				    p++;
				}
				k=0;
			}else 
			{
				cout<<" ";
				k=1;
			}
		}
		cout<<endl;
    }
}
