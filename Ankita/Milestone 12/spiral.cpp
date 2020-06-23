#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void display(int rows, int cols, int* a, int times, string dir, int ref_row , int ref_col )
{
    int i, j;
    /*for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        cout << *(a + i*cols + j) << "\t";*/

    if (times > 0)
    {
        if (dir == "right")
        {
            i = ref_row/2 ;
            for(j = ref_col/2; j < cols - ref_col/2 ; j++)
                cout << *(a + i*cols +j) << "\t";
            dir = "down";
            display (rows, cols, (int*)a, times - 1, dir, ref_row + 1 , ref_col );
        }
        else if (dir == "down")
        {
            j = cols - ref_col/2-1;
            for (i = ref_row-(ref_row - 1)/2; i < rows - (ref_row - 1)/2 ; i++)
                cout << *(a + i*cols +j) << "\t";
            dir = "left";
            display (rows, cols, (int*)a, times - 1, dir, ref_row , ref_col + 1 );
        }
        else if (dir == "left")
        {
            i = rows - (ref_row-1)/2 - 1;
            for(j = cols - (ref_col - (ref_col - 1)/2) - 1; j >= (ref_col - 1)/2  ; j--)
                cout << *(a + i*cols +j) << "\t";
            dir = "up";
            display (rows, cols, (int*)a, times - 1, dir, ref_row + 1 , ref_col );
        }
        else if (dir == "up")
        {
            j = (ref_col - 1)/2;
            for (i = rows - (ref_row/2 + 1); i >= ref_row/2; i--)
                cout << *(a + i*cols +j) << "\t";
            dir = "right";
            display (rows, cols, (int*)a, times - 1, dir, ref_row , ref_col + 1 );
        }
    }

}

int main ()
{
    int rows, cols,times, i=0, j=0, ref_row = 0, ref_col = 0 ;
    string dir;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];
    if (cols == 1)
        dir = "down";
    else
        dir = "right";
    cout<<"\nEnter the elements of array : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<"Enter "<<cols<<" elements for row "<<i+1<<" : ";
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nElements of the array are : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<" |";
        for(int j=0; j<cols; j++)
        {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<"| \n";
    }
    if(cols == 1 || rows == 1)
        times = 1;
    else if(rows == cols || rows < cols)
        times = rows*2- 1;
    else if (rows > cols)
        times = 2*cols;
    cout<<"\nElements of the array in clockwise direction are : \n";
    display (rows, cols, (int*)arr, times, dir, ref_row , ref_col );
}
