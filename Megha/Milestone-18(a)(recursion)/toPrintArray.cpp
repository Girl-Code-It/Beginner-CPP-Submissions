#include <iostream>
using namespace std;
void toPrintArray(int arr[], int pos , int l){
    if(pos>=l){
        return;
    }
    cout<<arr[pos]<<" ";
    toPrintArray(arr,pos+1,l);
}
int main() {
    int l;
    cin>>l;
    int arr[l+1];
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    toPrintArray(arr,0,l);
}
