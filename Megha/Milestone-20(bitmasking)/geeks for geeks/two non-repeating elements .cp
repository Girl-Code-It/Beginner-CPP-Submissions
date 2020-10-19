#include <iostream>
using namespace std;
void findUnique(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
     int i=0;
    int temp = res;
    while(temp>0){
        if(temp&1){
            break;
        }
        i++;
        temp=temp>>1;
    }
    int mask=(1<<i);
    int firstNo=0;
    for(int i=0;i<n;i++){
        if((mask&arr[i])!=0){
            firstNo=firstNo^arr[i];
        }
    }
    int secondNo=res^firstNo;
    cout<<firstNo<<endl;
    cout<<secondNo<<endl;
}
int main() {
    int n,i;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findUnique(arr,n);
}
