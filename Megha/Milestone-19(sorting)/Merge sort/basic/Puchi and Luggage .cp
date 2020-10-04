#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;  //number of test cases
    cin>>t;
    while(t--){
        long long int n;  //n represents the number of friends.
        cin>>n;
        long long int arr[1000000];  //represents Weighti.
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int count;
        for(long long int i=0;i<n;i++){
            count=0;
            for(long long int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            count++;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
}
