
#include <stdio.h> 

void swap(int R,int C,int mat[R][C], int row1, int row2, 
          int col) 
{ 
    for (int i = 0; i < col; i++) 
    { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 
int rankOfMatrix(int R,int C,int mat[R][C]) 
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
                 double mult = (double)mat[col][row] / 
                                       mat[row][row]; 
                 for (int i = 0; i < rank; i++) 
                   mat[col][i] -= mult * mat[row][i]; 
             } 
           } 
         } 
        else
        { 
            int reduce = 1; 
            for (int i = row + 1; i < R;  i++) 
            {            
                if (mat[i][row]) 
                { 
                    swap(R,C,mat, row, i, rank); 
                    reduce = 0;                           
                 } 
            } 
            if (reduce) 
            {  
                rank--;  
                for (int i = 0; i < R; i ++) 
                    mat[i][row] = mat[i][rank];
            }  
            row--; 

        } 
        
       //to see intermediate steps
      static int s = 1;
      printf("\nStep %d :\n",s);
      s++;
      display(R,C,mat); 

       printf("\n"); 
    } 
    return rank; 
} 

  

void display(int R,int C,int mat[R][C]) 
{ 
    for (int i = 0; i < R; i++) 
    { 
        for (int j = 0; j < C; j++) 
            printf("%d\t", mat[i][j]); 
        printf("\n"); 
    } 
}  

int main() 
{ 
    int R,C,mat[7][7];
    printf("Enter the no. of rows : ");
    scanf("%d",&R);
    printf("Enter the no. of column : ");
    scanf("%d",&C);
    printf("Enter the element\n");
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
             
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nGiven matrix...\n");
    display(R,C,mat); 
    printf("Rank of the matrix is : %d", 

         rankOfMatrix(R,C,mat)); 

    return 0; 
} 