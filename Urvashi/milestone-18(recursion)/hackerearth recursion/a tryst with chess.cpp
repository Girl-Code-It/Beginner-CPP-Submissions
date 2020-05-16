#include<iostream>
using namespace std;
int chessboard[10][10];
int knight(int i, int j,int n)
{
	int count=0;
	if(i>=10||j>=10||j<0||i<0)
	return 0;
	if(n==0)
    return 0;
    if(chessboard[i][j]==1&&n==1)
    return 0;
    if(n==1)
    {
	chessboard[i][j]=1;
	count=1;
}
    return count+knight(i-1, j-2,n-1)+knight(i+1, j-2,n-1)+knight(i-2, j-1,n-1)+knight(i+2, j-1,n-1)+knight(i-2, j+1,n-1)+knight(i-1, j+2,n-1)+knight(i+1, j+2,n-1)
    +knight(i+2, j+1,n-1);
}
int main()
{
int i,j,x,n;
cin>>i>>j>>n;
i--;
j--;
cout<<knight(i,j,n+1)<<endl;
}
