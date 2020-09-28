//insertion sort
#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int value=arr[i];
        int hole = i;
       while(hole>0 && arr[hole-1]>value){
           arr[hole]=arr[hole-1];
           hole=hole-1;
       }
       arr[hole]=value;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
