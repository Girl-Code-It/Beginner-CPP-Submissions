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

int main() {
    int t,n,m;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int left[n+1];
    int right[m+1];
    int arr[n+m+1];
    for(int i=0;i<n;i++){
        cin>>left[i];
    }
    for(int i=0;i<m;i++){
        cin>>right[i];
    }
    merge(arr,left,n,right,m);
    for(int i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
