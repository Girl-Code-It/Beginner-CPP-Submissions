#include <iostream>
using namespace std;
int t[1001][1001];

int longestSubsequence(string X,string Y,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(t[m][n] != -1){
        return t[m][n];
    }
    if(X[m-1] == Y[n-1]){
        return t[m][n] = 1+longestSubsequence(X,Y,m-1,n-1);
    }
    else
        return t[m][n] = max(longestSubsequence(X,Y,m,n-1), longestSubsequence(X,Y,m-1,n));
}

int main() {
    string X,Y;
    cin>>X>>Y;
    int m = X.length();
    int n = Y.length();
    memset(t,-1,sizeof(t));
    cout<<longestSubsequence(X,Y,m,n);
    return 0;
}
