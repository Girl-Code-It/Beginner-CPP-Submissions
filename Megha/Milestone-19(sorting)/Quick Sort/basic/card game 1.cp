#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partiton(int *arr,int start,int end){
    int pivot = arr[end];
    int partitonIndex = start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            swap(&arr[i],&arr[partitonIndex]);
            partitonIndex++;
        }
    }
    swap(&arr[partitonIndex],&arr[end]);
    return partitonIndex;
}
void quicksort(int *arr,int start,int end){
    if(start<end){
    int pivot=partiton(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}
}
int main() {
    int n,m,max=0;
    cin>>n;
    int arr[n],second;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>second;
        if(second>max)
            max=second;
    }
    quicksort(arr,0,n-1);

    long long int sum=0;
 
    for(int i=0;i<n;i++){
        if(arr[i]<=max){
          sum+=max-arr[i]+1;
        }
    }
    cout<<sum<<endl;
}
