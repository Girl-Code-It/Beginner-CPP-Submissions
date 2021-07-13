//Take 10 integer inputs from user and store them in an array and print them on screen.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter 10 numbers."<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
       
       cout<<"the numbers are:";
    for(int i=0; i<10; i++){
        cout<<arr [i];
    }
    return 0;
}
