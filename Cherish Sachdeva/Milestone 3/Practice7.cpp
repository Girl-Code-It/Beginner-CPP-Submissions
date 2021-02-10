#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,a,b=0;
    cin>>n;
    k=n;
    while(n>0){
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    if(k==b){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not pallindrome"<<endl;
    }
    return 0;
}