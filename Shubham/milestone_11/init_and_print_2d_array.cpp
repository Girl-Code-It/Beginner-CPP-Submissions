#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{   
    //program to initialize and print a 2D array

    int arr[2][2] = {
                    {4, 5},
                    {6, 7}};
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


   


  
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

