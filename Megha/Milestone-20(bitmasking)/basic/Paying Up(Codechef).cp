#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,ans=0;
    for(int i=0;i<n-1;i++){
     for(int j=i+1;i<n;i++){
         sum=sum+arr[i];
         if(sum==k){
             ans=1;
             break;
         }
         else{
             ans=0;
         }
     }
    }
     if(ans==1){
         cout<<"yes";
     }
     else{
         cout<<"no";
     }
}
