#include<cstdlib>
#include<iostream>
#define MAX 100

using namespace std;

void printArray(int*, int);
void delElem(int*, int, int);
int main()
{

    //program to print all unique elements

    int n, rain[MAX] = {0};


    cout << "Enter the size of array ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number : " << i << " :  "; 
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        rain[arr[i]]++;
    }

    for(int i=0; i<100; i++)
    {
        if(rain[i] == 1)
        {
            cout << i << "  ";
        }
    }

}

void printArray(int *rain, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << rain[i] << "  ";
    }
    cout << endl;
}

void delElem(int *arr, int size, int pos)
{
    for(int i=pos; i<size; i++)
    {
        arr[i] = arr[i+1];
    }

}                                                                                                                                                        
