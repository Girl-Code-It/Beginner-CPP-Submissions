#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[n+1];
    int arr2[n+1];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
    int flag;
    for(int i=0;i<n;i++){
       flag=0;
        if(arr1[i]<arr2[i]){
            flag=1;
        }
    }
    if(flag==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
}
