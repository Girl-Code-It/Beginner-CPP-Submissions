#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int rows, cols, check=1, c=0, n=0, i=0, j=0;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];
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
    cout<<"\nElements of the array in clockwise direction are : \n";
    //n denotes the number of times it is required to change the direction.
    for(int n=0; n<2*rows-1; n++)
    {
        //c remains constant for the loop and j increments or decrements.
        if(check==1)
        {
            if(n%4==0 || n==0)                          //right
            {
                c=i;
                for(j=i; j<cols-i-1; j++)
                {
                    cout<<arr[c][j]<<", ";
                }
                if(n==2*rows-2 && rows%2==0)
                    cout<<arr[c][c-1];
                else if(n==2*rows-2 && rows%2!=0)
                    cout<<arr[c][c];
                //c++;
            }
            else if(n%4==2)                              //left
            {
                c=rows-i-1;
                for(j=cols-i-1; j>=i+1; j--)
                {
                    cout<<arr[c][j]<<", ";
                }
                if(n==2*rows-2 && rows%2==0)
                    cout<<arr[c][c-1];
                else if(n==2*rows-2 && rows%2!=0)
                    cout<<arr[c][c];
                //c--;
            }
        }
        if(check==0)
        {
            if(n%4==1)                         //down
            {
                c=cols-i-1;
                for(j=i; j<rows-i-1; j++)
                {
                    cout<<arr[j][c]<<", ";
                }
                if(n==2*rows-2 && rows%2==0)
                    cout<<arr[c][c-1];
                else if(n==2*rows-2 && rows%2!=0)
                    cout<<arr[c][c];
                //c--;
            }
            else if (n%4==3)                     //up
            {
                c=i;
                for(j=rows-i-1; j>=i+1; j--)
                {
                    cout<<arr[j][c]<<", ";
                }
                if(n==2*rows-2 && rows%2==0)
                    cout<<arr[c][c-1];
                else if(n==2*rows-2 && rows%2!=0)
                    cout<<arr[c][c];
                //c++;
            }
        }
        check=1-check;
        if((n+1)%4==0 && n!=0)           //i remain const for all four cases (i.e. R, D, L, U) then increments.
            i++;
    }
  return 0;
}
