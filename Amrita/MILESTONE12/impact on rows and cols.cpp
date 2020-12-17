#include<iostream>
using namespace std;
int main()


{
  int m,n,i,j,it,jt;
  cin>>m>>n;
  int a[m][n],row[m],col[n];
  for(i=0;i<m;i++)
  {
	  for(j=0;j<n;j++)
	  cin>>a[i][j];
  }
  for(i=0;i<m;i++)
  {
	  for(j=0;j<n;j++)
	   if (a[i][j]==1)
	   {
		   row[i]=1;
           col[j]=1;
	   }
  }
  for(i=0;i<m;i++)
  {
	  for(j=0;j<n;j++)
      if ((row[i]==1 || col[j]==1) && a[i][j]==0)
        a[i][j]=1;
  }
  for(i=0;i<m;i++)
  {
	  for(j=0;j<n;j++)
	  {
          cout<<a[i][j];
          if(j!=n-1)
          cout<<" ";
      }
      cout<<endl;
  }
  return 0;


}
