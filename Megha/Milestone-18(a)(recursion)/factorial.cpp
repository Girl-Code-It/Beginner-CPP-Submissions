#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
     return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main() {
    int n=5;
    cout<<fact(n);
    return 0;
}

//output=120
