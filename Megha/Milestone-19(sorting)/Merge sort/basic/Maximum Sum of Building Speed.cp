#include <iostream>
using namespace std;
void merge(long long *arr,long long *left,int leftcount,long long *right,int rightcount){
    int i=0,j=0,k=0;
    while(i<leftcount && j<rightcount){
        if(left[i]<right[j]){
        arr[k]=left[i];
        i=i+1;
        }
        else{
            arr[k]=right[j];
            j=j+1;
        }
        k=k+1;
    }
    while(i<leftcount){
        arr[k]=left[i];
        i=i+1;
        k=k+1;
        }
    
    while(j<rightcount){
        arr[k]=right[j];
        j=j+1;
        k=k+1;
        }
    
}
void mergeSort(long long *arr,long long n){
    if(n<2){
        return;
    }
    long long mid=n/2;    //will divide array(int two equal halfs)
    long long left[mid];
    long long right[n-mid];
    for(int i=0;i<mid;i++){
        left[i]=arr[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=arr[i];
    }
    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(arr,left,mid,right,n-mid);
}
int main() {
    long long n;
    cin>>n;
    long long arr[2*n];
    long long k=2*n;
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    mergeSort(arr,k);
    long long int sum=0;
    for(int i=0;i<k;i=i+2){
        sum+=arr[i];
    }
        cout<<sum<<endl;
    
}
