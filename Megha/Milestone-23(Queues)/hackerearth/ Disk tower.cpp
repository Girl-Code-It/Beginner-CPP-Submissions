#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,put;
    cin>>n;
    int arr[n+1]={0};
    int max=n;

    for(int i=0;i<n;i++){
        cin>>put;
        arr[put] = put;

        if(put == max){
            while(arr[max]){
                cout<<arr[max]<<" ";
                max--;
            }
            cout<<endl;
        }
        else{
            cout<<endl;
        }
    }
}
