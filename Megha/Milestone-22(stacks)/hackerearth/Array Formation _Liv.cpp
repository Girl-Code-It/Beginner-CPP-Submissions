#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        ans=0;
        for(int j=2;j<=sqrt(arr[i]);j++){
            if(arr[i]%j == 0){
                ans=1;
                break;
            }
        }
        if(ans==0){
            cout<<arr[i]<<" ";
            arr[i]=0;
        }
    }

    cout<<endl;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
