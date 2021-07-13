//https://www.geeksforgeeks.org/minimum-number-deletions-insertions-transform-one-string-another/

#include <iostream>
using namespace std;
int t[1001][1001];

void minimumNumDeletion(string X,string Y,int m,int n){
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

    cout<<"Deletions = "<<m-t[m][n]<<endl;
    cout<<"Deletions = "<<n-t[m][n]<<endl;
    return;
}

int main() {
    string X,Y;
    cin>>X>>Y;
    int m = X.length();
    int n = Y.length();
    //memset(t,-1,sizeof(t));
    minimumNumDeletion(X,Y,m,n);
    return 0;
}
/*
Input - 
Enter string A and B
ABCDGH
AEDFHR
Output - 
Subsequence of string A and B - 
ADH
*/
