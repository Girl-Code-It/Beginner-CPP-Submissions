//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#

#include <iostream>
using namespace std;
int t[1001][1001];

int longestSubsequence(string X,string Y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
            t[i][j] = 0;
        }
    }

    int result=0;
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(X[i-1] == Y[j-1]){
                t[i][j] = t[i-1][j-1] + 1;
                result = max(result, t[i][j]);
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    
    return result;
}

int main() {
    string X,Y;
    cin>>X>>Y;
    int m = X.length();
    int n = Y.length();
    //memset(t,-1,sizeof(t));
    cout<<longestSubsequence(X,Y,m,n);
    return 0;
}
