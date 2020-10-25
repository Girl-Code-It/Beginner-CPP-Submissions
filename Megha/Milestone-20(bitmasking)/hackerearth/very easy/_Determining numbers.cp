#include <bits/stdc++.h>
using namespace std;
void uniqueTwo(long long int *arr,long long int n){
   long long int res=0;
    for(long long int i=0;i<n;i++){
        res=res^arr[i];
    }
   long long int temp = res;
   long long int i=0;
    while(temp>0){
        if(temp&1){
            break;
        }
        i++;
        temp=temp>>1;
    }
   long long int mask=1>>i;
   long long int firstNo=0;
    for(long long int i=0;i<n;i++){
        if(mask&arr[i]){
            firstNo=firstNo^arr[i];
        }
    }
   long long int secondNo=res^firstNo;
    cout<<firstNo<<" "<<secondNo<<endl;
}
int main() {
   long long int n;
    cin>>n;
   long long int arr[n+1];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    uniqueTwo(arr,n);
}
