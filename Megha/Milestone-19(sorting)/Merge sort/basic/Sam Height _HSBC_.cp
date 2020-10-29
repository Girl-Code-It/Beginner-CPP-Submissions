#include <iostream>
using namespace std;
void merge(int *arr,int *left,int leftcount,int *right,int rightcount){
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
void mergeSort(int *arr,int n){
    if(n<2){
        return;
    }
    int mid=n/2;    //will divide array(int two equal halfs)
    int left[mid];
    int right[n-mid];
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
    int t;
    cin>>t;
    while(t--){
    int n,ht;    //n is the total number of Sam's friend and ht is Sam height.
    cin>>n>>ht;
    int arr[n+1];
    for(int i=0;i<n;i++){    //input of array
        cin>>arr[i];
    }
    mergeSort(arr,n);  //recursive call
    int left=0,right=0;
    for(int i=0;i<n;i++){
        if(arr[i]<ht){
            left++;
        }
        else{
            right++;
        }
    }
    if(left>right){
    cout<<left-right<<endl;
    }
    else{
        cout<<right-left<<endl;
    }
}
}
