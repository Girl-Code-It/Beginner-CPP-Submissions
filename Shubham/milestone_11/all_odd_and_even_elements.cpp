#include<cstdlib>
#include<iostream>

using namespace std;


int main()
{
    //program to print all negative elements in the array

    int n, even=0, odd=0;
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
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    
    cout << "Total Number of even elements :  " << even << endl;
    cout << "Total Number of odd elements   :  " << odd << endl;
}


