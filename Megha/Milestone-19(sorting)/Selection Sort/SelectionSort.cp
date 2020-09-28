#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int imin=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[imin]){
                imin=j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[imin];
            arr[imin]=temp;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//time complexity = O(n^2)
