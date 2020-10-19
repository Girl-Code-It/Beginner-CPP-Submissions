#include <iostream>
using namespace std;
int toPrintMaxArray(int arr[],int l){
     static int i=0,max=arr[0];
     if(i<l){
         if(arr[i]>max)
             max=arr[i];
             i++;
         toPrintMaxArray(arr,l);
     }
     return max;
}
int main() {
    int l;
    cin>>l;
    int arr[l+1];
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<toPrintMaxArray(arr,l);
}
