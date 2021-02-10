#include <iostream>
using namespace std;
int main()
{   long i,j,row,col,a[1000][1000],n=0,t,k;
    cin>>row>>col;
    for(i=0;i<row;i++)
	{	for(j=0;j<col;j++)
		{ cin>>a[i][j];
		}
	}
	t=row*col;
    for(k=0;k<t;k++)
	{	for(i=0;i<col;i++)
		{	for(j=0;j<row;j++)
		    {	if(i+j==n)
                cout<<a[j][i]<<" ";
			}
		}
		cout<<endl;
		n++;
	}
}
