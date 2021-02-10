using namespace std;
#include<iostream>
int main()
{
   int m,n,top=0,bottom,left=0,right,i;
   char x='X',a[20][20];
   cin>>m>>n;
   right=n-1;
   bottom=m-1;
   while(top<=bottom && right>=left)
   {
       for(i=left;i<=right;i++)
       {
           a[top][i]=x;
       }
       top++;

       for(i=top;i<=bottom;i++)
       {
           a[i][right]=x;
       }
       right--;
       for(i=right;i>=left;i--)
       {
           a[bottom][i]=x;
       }
       bottom--;
       for(i=bottom;i>=top;i--)
       {
           a[i][left]=x;
       }
       left++;
       if (x=='X')
			x='0';
	   else
	   		x='X';
   }

   for(i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(j != n-1) 
		   cout << a[i][j] << ' ' ;
	       else
		   cout << a[i][j]; 
		   
       }
       cout<<"\n";
       
   }
    return 0;
}