#include <iostream>
using namespace std;
void FindOddone(int *arr,int n){
    int Finalsum=(n+1)*(n+2)/2;
    int sum=0,ans;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
   ans=Finalsum-sum;
   cout<<ans;
}
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    FindOddone(arr,n);
}
