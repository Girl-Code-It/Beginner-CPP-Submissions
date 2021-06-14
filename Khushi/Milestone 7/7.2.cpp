
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter 10 numbers."<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
       
    int a;
    cout<<"Enter the number to be searched: ";
    cin>>a;
    int found=0;

    for(int i=0; i<10; i++){
        if(arr[i]==a){
            found =1;
            break;
        }
    }
        if(found=1){
            cout<<"Number is present.";
        }
    else
    cout<<"Number is not present.";
   return 0;
}
