#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);
int linear_search(int[], int, int);

int main()
{
    //linear searching 

    int n, arr[10], result;

    for(int i=0; i<10; i++)
    {
        cout << "Enter the value of element No " << i << " :  ";
        cin >> arr[i];
    }

    cout << "Enter an Integer to search in Array" <<endl;
    cin >> n;

    result = linear_search(arr, 10, n);

    if(result >= 0)
        cout << "Yes! The number " << n << " Exists. It's on the position " << result <<endl;
    
    else
        cout << "No! The number " << n << "do not exist" << endl;
 
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

int linear_search(int arr[], int size, int search)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == search)
            return i;
    }

    return -1;
}
