#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,count;
    char no;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        for(int i=0;i<n;i++){
        cin>>no;
        if(no=='0'){
            count++;
        }
        }
        cout<<count<<endl;
    }
}
