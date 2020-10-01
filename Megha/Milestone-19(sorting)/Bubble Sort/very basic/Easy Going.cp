#include <iostream>
using namespace std;
void bubble(int *arr,int n){
    for(int k=1;k<n;k++){
        int flag=0;
    for(int i=0;i<n-k;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            flag=1;
        }
    }
    if(flag==0)
        break;
    }
}
int main() {
    int n,m,t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    int minSum=0,maxSum=0;
    for(int i=0;i<n-m;i++){
        minSum+=arr[i];
    }
    for(int i=m;i<n;i++){
     maxSum+=arr[i];
    }
    cout<<maxSum-minSum<<endl;
}
}
