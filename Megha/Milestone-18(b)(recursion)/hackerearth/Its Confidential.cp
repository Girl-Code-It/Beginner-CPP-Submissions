#include<bits/stdc++.h>
using namespace std;

void printString(char str[],int l,int h){
    int mid=(l+h)/2;
    if(l>h){        //if low is more than high then we will return nothing
        return;
    }
    cout<<str[mid];
    printString(str,l,mid-1);    //for left side we eill take high as mid-1
    printString(str,mid+1,h);    //for right sode we will take low as mid+1
}

int main(){
    int t;  //number of test cases
    cin>>t;

    while(t--){
        int n,l=0;    //length of string
        cin>>n;
        char str[n+1];
        cin>>str;
    printString(str,l,n-1);
    cout<<endl;
    }
}
