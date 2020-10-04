#include <iostream>
using namespace std;
int numberOfPaths(int n,int m){
    if(n==1 || m==1){       //if number of columns and rows are one then we will return 1
        return 1;
    }
    return numberOfPaths(n-1,m)+numberOfPaths(n,m-1);     //we will add their counts till row and column do not become zero
}
int main() {
    int t;
    cin>>t;   //number of test cases
    while(t--){
        int n,m; //number of rows and columns
        cin>>n>>m;
        cout<<numberOfPaths(n,m)<<endl;
    }
    return 0;
}
