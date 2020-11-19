#include <iostream>
using namespace std;
int main() {
    long long int n,k,sum=0,count=0;
    cin>>n>>k;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(long long int i=0;i<k;i++){
        if(arr[i] >= arr[n-1]){
        sum += arr[i];
        k--;}
    }
 
    for(long long int i=0;i<k;i++){
        sum += arr[n-i-1];
    }

    cout<<sum<<endl;
}
