//rank of a matrix 


#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;
#define R 3 
#define C 3 

void swap(int mat[R][C], int row1, int row2, 
          int col) 
{ 
    for (int i = 0; i < col; i++) 
    { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 

void display(int mat[R][C] ) 
{ 
    for (int i = 0; i <R; i++) 
    { 
        for (int j = 0; j <C; j++) 
            cout<<mat[i][j]<<" "; 
       
	   cout<<endl; 
    } 
} 
  

int rankOfMatrix(int mat[R][C]) 
{ int mult;
    int rank = C; 
  
    for (int row = 0; row < rank; row++) 
    {
    	if(mat[row][row]!=0)  //diagonal element is zero  
    	{
    		for(int col=0;col<C;col++)
    		{
    			if(col!=row)
    			{
    				mult=mat[col][row]/mat[row][row];
    				for(int i=0;i<rank;i++)
    				{
    					mat[col][i]=mat[col][i]-(mult)*(mat[row][i]);
    				}
    			}
    		}
    		
    	}
    	
    	
    	else // diagonal element is not zero 
    	{ int count=1;
    		for(int i=row+1;i<=R;i++) //find non zero element
    		{
    			if(mat[i][row]!=0)
    			{
    				swap(mat,row,i,rank);
    				count=0;
    				break;
    				
    			}
    		}
    		
    		if(count==1) //if not found, then all values of this column are zero
    		{
    			rank--;
    			
    			
    		}
    		
    		row--;
    	}
    	
  	display(mat);
    	
    }

return rank;
}






int main()
{ int count=0,k=0,a[3][3],i,j,n,b[9];
	
	cout<<"Enter the no. of rows and cols "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"enter elements of array "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
    }
    
    cout<<"Rank of matrix is "<<endl;
    cout<<rankOfMatrix(a);
    
    getch();
    return 0;
}
    
    
