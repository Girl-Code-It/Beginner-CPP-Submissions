#include<cstdlib>
#include<iostream>
#define MAX 100
using namespace std;

void printArray(int*, int);

int main()
{   
    //program to merge two arrays to a third one 

    int first[MAX], second[MAX], third[MAX];
    int n1, n2;

    //input array from user

    cout << "Enter the size of first arrray\n";
    cin >> n1;

    for(int i=0; i<n1; i++)
    {
        cout << "Enter the value of index Number " << i <<" :  ";
        cin >> first[i];
    }

    cout << "Enter the size of second array\n";
    cin >> n2;

    for(int i=0; i<n2; i++)
    {
        cout << "Enter the value of index Number " << i <<" :  ";
        cin >> second[i];
    }

    //merging

    for(int i=0; i<n1; i++)
    {
        third[i] = first[i];
    }

    for(int i=n1, j=0; j<n2; i++, j++)
    {
        third[i] = second[j];
    }

    cout << "Third array" << endl;
    printArray(third, n1+n2);

    
}

void printArray(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}       
