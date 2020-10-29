#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned short t,n,m,n1,n2;     //number of test cases
    cin>>t;
    char c;
    while(t--){
    cin>>n>>m>>c;
    if(c=='L'){
    n1=(n<<m);
    n2=(n >> (16-m));
    n=n1 | n2;}
    else{
    n1=(n>>m);
    n2=(n << (16-m));
    n=n1 | n2;}
    cout<<n<<endl;
    }
    return 0;
}
