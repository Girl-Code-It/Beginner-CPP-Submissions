#include <iostream>
using namespace std;
void findUnique2(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    //find the rightmost setbits in result
    int i=0;
    int temp=res;
    while(temp>0){
        if(temp&1){
            break;
        }
        i++;
        temp=temp>>1;
    }
    int mask=1<<i;
    int firstNo=0;
    for(int i=0;i<n;i++){
        if((mask&arr[i])!=0){
            firstNo=firstNo^arr[i];
        }
    }
    int secondNo;
    secondNo=res^firstNo;
    cout<<firstNo<<endl;
    cout<<secondNo<<endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findUnique2(arr,n);
}
