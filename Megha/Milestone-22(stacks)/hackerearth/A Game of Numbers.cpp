#include <iostream>
using namespace std;

int main() {
    int n,ans=0,j1;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        ans=0;
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            ans=1;
            j1=j;
            break;
        }
    }

    if(ans==1){
        ans=0;
        for(int k=j1+1;k<n;k++){
            if(arr[k]<arr[j1]){
                ans=1;
                cout<<arr[k]<<" ";
                break;
            }
        }
        }

        if(ans==0){
            cout<<"-1"<<" ";
        }
    }

    return 0;
}
