 #include <iostream> 
 using namespace std;
 #define R 3         //question-21(find rank):-Find the rank of the given MXN matrix.
 #define C 3

void swap(int mat[][C], int row1, int row2, int col) 
{ 
    for (int i = 0; i < col; i++) 
    { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 
int rankOfMatrix(int mat[][C]) 
{ 
    int rank = C; 
    for (int row = 0; row < rank; row++) 
    {  
        if (mat[row][row]) 
        { 
           for (int col = 0; col < R; col++) 
           { 
               if (col != row) 
               {            
                 double mult = (double)mat[col][row] / mat[row][row]; 
                 for (int i = 0; i < rank; i++) 
                   mat[col][i] -= mult * mat[row][i]; 
             } 
           } 
         } 
        else
        { 
            int reduce = 1; 
            for (int i = row + 1; i < R;  i++) 
                if (mat[i][row]) 
                { 
                    swap(mat, row, i, rank); 
                    reduce = 0;                           
                 } 
            if (reduce) 
            {  
                rank--;  
                for (int i = 0; i < R; i ++) 
                    mat[i][row] = mat[i][rank];
            }  
            row--; 
        } 
} 
}
	 int main()
    {
	int i , j,k, A[3][3];
     cout<<"enter the elements in the matrix A:";
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	cin>>A[i][j];
	cout<<"the matrix A is="<<endl;
		for(int i=0;i<R;i++)
		{
	for(int j=0;j<C;j++)
	{
	cout<<A[i][j]<<"\t";}
	cout<<"\n";
	}
   cout<<"rank of the matrix is="<< rankOfMatrix(A) ;
	return 0;
}
