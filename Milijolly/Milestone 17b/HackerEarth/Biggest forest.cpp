#include<iostream>
using namespace std;
char forest[1000][1000];
int n,count=0;
int size(int r, int c)
{

	if(r>=n||c>=n||r<0||c<0) 
	return 0;
	
	if(forest[r][c]=='T') 
	{
		           
		forest[r][c]='W'; 
		count++;
		size(r+1, c); 
		size(r-1, c);
		size(r, c+1);
		size(r, c-1);
	}
	return count;
}
int main()
{
	int max=0;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>forest[i][j];	
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(forest[i][j]=='T')
			    {
					count = size(i,j);
					if(count>max) 
						max=count;
						count=0;
				}
			}
		}
	cout<<max<<endl;
}
