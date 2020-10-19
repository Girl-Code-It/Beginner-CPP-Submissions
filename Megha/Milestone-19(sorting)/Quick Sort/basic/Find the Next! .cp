//Quick Sort
#include <iostream>
using namespace std;

long long int partition(long long int *arr,long long int start,long long int end){
    long long int pivot = arr[end];
    long long int partitionIndex = start;     //start partion index at start initially
    for(long long int i=start;i<end;i++){
        if(arr[i]<pivot){
            long long int temp = arr[i];
            arr[i] = arr[partitionIndex];      //swap if element is lesser than pivot
            arr[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    long long int ans = arr[partitionIndex];          //swap pivot with element at partition index
            arr[partitionIndex] = arr[end];
            arr[end] = ans;
        return partitionIndex;
}

void QuickSort(long long int *arr,long long int start,long long int end){
    if(start<end){
        long long int partitionIndex = partition(arr,start,end);  //calling partition
        QuickSort(arr,start,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,end);
    }
}

int main() {
    long long int n,q;   //SIZE OF array and number of queries
    cin>>n>>q;
    
    long long int arr[n+1];  //where the i-th integer denotes the number of arr it takes for the i-th pokemon to evolve.
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    
          QuickSort(arr,0,n-1);
          long long int x;   //we have to find nearest greater than x which is not presemt in array
     while(q--){
       
        cin>>x;
    long long int max=0,ans=0;
        for(long long int i=0;i<n;i++){
            if(arr[i]>x && x>=arr[i-1])
                max=x+1;
               if(max!=arr[i]){
                   ans=max;
               }
               else{
                   ans=max+1;
               }
        }
    cout<<ans<<endl;
    }
    return 0;
}
