#include<cstdlib>
#include<iostream>
#define SIZE 2


using namespace std;



int main()
{
    //proram to multiply two matrices

    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];

    int row, col, i, sum;

    cout << "Enter elements in matrix A of size " << SIZE << "x" << SIZE << endl;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cin >> A[row][col];
        }
    }

     cout << "Enter elements in matrix B of size " << SIZE << "x" << SIZE << endl;
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cin >> B[row][col];
        }
    }

    //logic to multiply

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            sum=0;

            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }


    //printing product of Matrices

     cout << "The product of Matrices is\n";
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            cout <<  C[row][col] << "  ";
        }
        cout << endl;
    }

    
}
         
