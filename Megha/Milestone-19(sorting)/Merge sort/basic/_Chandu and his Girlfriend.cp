#include <iostream>
using namespace std;
void merge(int *arr,int *left,int leftcount,int *right,int rightcount){
    int i=0,j=0,k=0;
    while(i<leftcount && j<rightcount){
        if(left[i]>=right[j]){
        arr[k]=left[i];
        i++;}
        else{
        arr[k]=right[j];
        j++;}
        k++;
    }
    while(i<leftcount){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rightcount){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int *arr,int n){
    if(n<2){
        return;
    }
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++){
        left[i]=arr[i];
    }
    for(int i=mid;i<n;i++){
        right[i-mid]=arr[i];
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(arr,left,mid,right,n-mid);
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
