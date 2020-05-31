/*Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) in which every elements is either X or O.
 The Xs and Os must be filled alternatively, the matrix should have outermost rectangle of Xs, then a rectangle of Os, then a rectangle of Xs, and so on.*/
 
 #include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
	char  a[4][4],ch='X';
	int i,j=0,n,m,k=0,l=0,r,c;
	
	cout<<"Enter the no. of rows and columns "<<endl;
	cin>>m;
	cout<<endl;
	cin>>n;
    r=m;c=n;k=0;l=0;
   
    while(l<n&&k<m)
	{
	 
        for(j=l;j<n;j++) //left to right
       	  a[k][j]=ch;
       	k++;  
    	
		for(i=k;i<m;i++) //top to down
     	  a[i][n-1]=ch;   
    	n--;
    	
    	if (k<m) //right to left
        { 
            
			for(j=n-1;j>=l;j--) 
                a[m-1][j]=ch; 
            m--; 
        } 
  
    
        if (l<n) //down to top
        { 
            for (i =m-1;i>= k;--i) 
                a[i][l]=ch; 
            l++; 
        } 
  
    
	
	ch=(ch=='X')?'O':'X';
    }
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
    getch();
    return 0;
    
}
