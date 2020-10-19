#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int n,m,max=0;
    cin>>n;
    int arr[n],second;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>second;
        if(second>max)
            max=second;
    }
    sort(arr,arr+n);

    long long int sum=0;
 
    for(int i=0;i<n;i++){
        if(arr[i]<=max){
          sum+=max-arr[i]+1;
        }
    }
    cout<<sum<<endl;
}
