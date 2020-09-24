#include <bits/stdc++.h>
using namespace std;
int numberOfWaysToClimb(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return numberOfWaysToClimb(n-1)+numberOfWaysToClimb(n-2)+numberOfWaysToClimb(n-3);
}
int main() {
    int n;
    cin>>n;    //number of stairs to climb
    cout<<numberOfWaysToClimb(n);
}
