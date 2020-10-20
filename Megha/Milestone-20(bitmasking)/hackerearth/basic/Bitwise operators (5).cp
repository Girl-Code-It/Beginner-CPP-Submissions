#include <bits/stdc++.h>
using namespace std;
void countSetbits(int n)
    {
        int count=0;
        while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
        }
        cout<<count<<endl;
    }
int main() {
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    countSetbits(n);
    }
}
