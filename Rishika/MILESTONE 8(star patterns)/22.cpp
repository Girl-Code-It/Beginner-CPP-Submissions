//22
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	char l;
	for(i=1;i<=4;i++)
	{   k=1;
	    l='A';
		for(j=1;j<=8;j++)
		{
			if(j>=5-i && j<=4)
			{
				cout<<k;
				k++;
			}else
			{
				cout<<" ";
			}
			if(j>=5 && j<=3+i)
			{
				cout<<l;
				l++;
			}else
			{
				cout<<"";
			}
	    }
		cout<<endl;
    }
}

