#include <iostream>
using namespace std;
int binarySearch(int arr[], int num ,int low ,int high){
    int mid,ans = 0;
      if(low<=high){
          mid=(low+high)/2;
          if(arr[mid]==num){
              ans = 1;
          }
          else if(arr[mid]<num){
              return binarySearch(arr,num,mid+1,high);
          }
          else{
               return binarySearch(arr,num,low,mid-1);
          }
      }
      return ans;
}
int main() {
    int n,num,ans;
    cin>>n>>num;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,high=n-1;
    ans = binarySearch(arr,num,low,high);
    if(ans==0){
        cout<<"The search number is not found in the array.";
    }
    else{
        cout<<"The search number found in the array";
    }
}
