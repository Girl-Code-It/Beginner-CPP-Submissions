//bubble sort
#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int k=0;k<n-1;k++){
        int flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
