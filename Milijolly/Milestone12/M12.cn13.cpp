/*Given a square binary matrix mat[n][n], find k such that all elements in k’th row are 0 and 
all elements in k’th column are 1. The value of mat[k][k] can be anything (either 0 or 1). If no such k exists, return -1*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int findrow(int b[3][3],int n)
{   int i=0,j=n-1,num=-1;
	while(i<n&&j>=0)
	{
		if(b[i][j]==0)
		{
			while(j>=0&&(b[i][j]==0||i==j))
			j--;
			
			if(j==-1) //all values are atq
			{
			  num=i;break;
		    }
			else
			i++;
		}
		
		else
		{
			while(i<n&&(b[i][j]==1||i==j))
			i++;
			
			if(i==n)
			{
				num=j;break;
			}
			else
			j--;
		}
		
	}
	
	if(num==-1) 
       return num; 
   
    for(i=0;i<n;i++) 
      if(num!=i&&b[i][num] != 1) 
          return -1; 
    for (int j=0; j<n; j++) 
       if(num!=j&&b[num][j] != 0) 
          return -1; 
  
    return num; 
	
	
}

int main()
{ int n,j,i,a[3][3],k=0;
	cout<<"Enter the no. of rows "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter binary elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
	cout<<"binary array elements are"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	  cout<<endl;	
    }
   
   
   cout<<" the row is "<<findrow(a,n);
    
    getch();
    return 0;
    
}
