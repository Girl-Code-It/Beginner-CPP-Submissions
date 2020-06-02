//Initialize and print all elements of a 2D array.
#include<iostream>
using namespace std;

void print_arr(int a[3][3])
{
    cout<<"\n arr[3][3] :\n";
    for(int i=0; i<3; i++)
    {
        cout<<" |\t";
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"| \n";
    }
    cout<<"\n";
}

int main()
{
    int arr[3][3]={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    print_arr(arr);

    return 0;
}
