#include <bits/stdc++.h>
#define lim 100000
#define MAX 100000
#define r 1000000007
using namespace std;
void merge(long int *arr,long int *left,int leftcount,long int *right,int rightcount){
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
void mergeSort(long int *arr,long int n){
    if(n<2){
        return;
    }
    int mid=n/2;    //will divide array(int two equal halfs)
    long int left[mid];
    long int right[n-mid];
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
    long int t;
    cin>>t;
    while(t--){
    long int n;
    cin>>n;
    long int arr[lim];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,n);
    long int sum=0,max=arr[n-1],ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=abs(arr[i]-arr[j]);
            ans+=sum;
        }
    }
    long int finalans=ans*max;
    cout<<finalans%r;
    cout<<endl;
}
}
