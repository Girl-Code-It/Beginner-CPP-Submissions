#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,k,sum=0,max;
    cin>>n>>k;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(long long int i=0;i<k;i++){
        sum += arr[i];
    }

    max = sum;
 
    for(long long int i=0;i<k-1;i++){
        sum += arr[n-1-i] - arr[k-1-i];
        if(sum>=max)
        max=sum;
    }

    cout<<max<<endl;
}
