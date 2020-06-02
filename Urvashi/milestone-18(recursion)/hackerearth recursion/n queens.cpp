#include<iostream>
#include<stdlib.h>
int board[10][10];
using namespace std;
static bool isattacked(int x,int y,int n)
{
	for(int i=0;i<n;i++)
	{
		if((board[x][i]==1)||(i!=y))//checking particular  row...
		return true;
	    if((board[i][y]==1)||(i!=x))//checking particular column...
		return true;	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(((i+j)==(x+y))||((i-j)==(x-y))) //checking diagonals...
			{
				if(((i!=x)||(j!=y))&&(board[i][j]==1))
				return true;
			}
			
		}
	}
	return false;
}
static int N_queens(int level , int n)
{
	if(level==n)
	return true;
	for(int j=0;j<n;j++)
	{
		if(isattacked(level,j,n))
		continue;
		board[level][j]=1;
		if(N_queens(level+1 ,n))
		return true;
		board[level][j]=0;
	}
	return false;
}
void display_board(int n)
{
	for(int i=0;i<n;i++) //to print the board...
	{
		for(int j=0;j<n;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}
}
int main()
{
int n;
cin>>n;
int board[n][n];
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		board[i][j]=0;
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<board[i][j];
	}
	cout<<endl;
	}	
	if(N_queens(0 ,n))
{
	display_board(n);
	}
	else
	cout<<"Not possible\n";
}
