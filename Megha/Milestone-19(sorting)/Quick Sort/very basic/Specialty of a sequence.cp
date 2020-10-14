//Quick Sort
#include <iostream>
using namespace std;

int partition(int *arr,int start,int end){
    int pivot = arr[end];
    int partitionIndex = start;     //start partion index at start initially
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i] = arr[partitionIndex];      //swap if element is lesser than pivot
            arr[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    int ans = arr[partitionIndex];          //swap pivot with element at partition index
            arr[partitionIndex] = arr[end];
            arr[end] = ans;
        return partitionIndex;
}

void QuickSort(int *arr,int start,int end){
    if(start<end){
        int partitionIndex = partition(arr,start,end);  //calling partition
        QuickSort(arr,start,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,end);
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    int sum;
    for(int i=0;i<n-k;i++){
            sum=sum+arr[i];
    }
    cout<<sum<<endl;
}
