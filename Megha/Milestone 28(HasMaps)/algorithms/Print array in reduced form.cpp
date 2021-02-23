
#include <bits/stdc++.h>
using namespace std;
 
void toReducedForm(int arr[], int n)
{
    int temp[n];
    memcpy(temp,arr,n*sizeof(int));
    sort(temp,temp+n);
    unordered_map<int, int> m;
    int value = 0;
    for(int i=0;i<n;i++){
        m[temp[i]] = value++;
    }
    for(int i=0;i<n;i++){
        arr[i] = m[arr[i]];
    }
}

void printArr(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
} 
  
 
// Driver function to test the above function
int main()
{
    int arr[] = { 10,40,20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    toReducedForm(arr, n);
    printArr(arr,n);
    return 0;
}
