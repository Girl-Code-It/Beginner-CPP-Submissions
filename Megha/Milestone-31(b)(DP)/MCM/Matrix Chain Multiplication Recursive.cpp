//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1#

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i, int j){
        if(i >= j){
            return 0;
        }
        
        int ans = INT_MAX;
        
        for(int k=i;k<j;k++){
            int temp = solve(arr,i,k) + 
            solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];  
            ans = min(ans,temp);
        }
        
    return ans;
}

int matrixMultiplication(int N, int arr[])
{
        int i=1,j=N-1;
        
    return solve(arr,i,j);
}

int main() {
    int N;
    cin>>N;
    int arr[N+1];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<matrixMultiplication(N,arr);
}
