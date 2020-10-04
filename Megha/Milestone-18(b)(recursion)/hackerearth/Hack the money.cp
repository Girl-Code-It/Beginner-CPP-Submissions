#include <bits/stdc++.h>
using namespace std;

int hackMoney(long n){
    if(n==1){         //if n is 1 then return 1
        return 1;
    }
    if(n%10==0){         //if n is multiple of 10 then return 1
        if(hackMoney(n/10)==1)
        return 1;
    }
    if(n%20==0){         //if n is multiple of 20 then return 1
        if(hackMoney(n/20)==1)
        return 1;
    }            //if all above are not satisfied return 0
    return 0;
}
int main() {
    int t;   //number of test cases
    cin>>t;

    while(t--){
        long n,ans;    //number and the result
        cin>>n;
        ans = hackMoney(n);
        if(ans==1)     //if the hackMoney function return print yes
            cout<<"Yes"<<endl;
        else                 //otherwise no
            cout<<"No"<<endl;
    }
}
