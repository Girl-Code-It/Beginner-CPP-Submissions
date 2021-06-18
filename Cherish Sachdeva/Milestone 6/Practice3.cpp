#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,rem,pro,sum=0;
    cin>>n;
    a=n;
    while(a!=0){
        rem=a%10;
        prod=1;
        for(int i=1;i<=rem;i++){
            prod=prod*i;
        }
        sum+=prod;
        a/=10;
    }
    cout<<sum<<endl;
    if(sum==n){
        cout<<"Strong Number";
    }else{
        cout<<"Non-Strong Number";
    }
    return 0;
}

