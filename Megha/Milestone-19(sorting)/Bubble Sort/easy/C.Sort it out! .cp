#include <iostream>
using namespace std;
void bubble(int arr[],int n,int a[]){
    for(int k=1;k<n;k++){
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];     //this is for swapping numbers in array
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=1;
                int ans=a[i];        //this is for swapping index in array
                a[i]=a[i+1];
                a[i+1]=ans;
            }
            
        }
        if(flag==0)
        break;
    }
}
int main() {
    int n,i;  //size of array
    cin>>n;
    int arr[n+1];   //array
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[i]=i;     //initialising index array
    }
    bubble(arr,n,a);
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
}
