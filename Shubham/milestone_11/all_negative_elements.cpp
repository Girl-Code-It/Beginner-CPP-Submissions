#include<cstdlib>
#include<iostream>

using namespace std;


int main()
{
    //program to count all negative elements present in the array

    int n, neg =0;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number " << i << " :  " ;
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
            neg++;
    }
    
    cout << "Total Number of negative elements  :  " << neg << endl;
}


