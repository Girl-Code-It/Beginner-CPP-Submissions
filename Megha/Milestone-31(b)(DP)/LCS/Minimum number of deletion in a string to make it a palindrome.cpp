//https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1

#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

int minimumNumDeletion(string X, int m){
    string Y = X;
    reverse(Y.begin(),Y.end());
    int n = Y.length();
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
            t[i][j] = 0;
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(X[i-1] == Y[j-1]){
                t[i][j] = t[i-1][j-1] + 1;
            }
            else{
                t[i][j] = max(t[i][j-1], t[i-1][j]);
            }
        }
    }

    return m - t[m][n];
}

int main() {
    string X;
    cin>>X;
    int m = X.length();
    cout<<minimumNumDeletion(X,m);
    return 0;
}
/*
Input - 
Enter string X
bbbab
Output -  
4
Time Complexity - O(m*n)
*/
