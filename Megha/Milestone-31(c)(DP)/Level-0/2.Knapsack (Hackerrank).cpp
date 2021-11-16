// https://www.hackerrank.com/challenges/unbounded-knapsack/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int unboundedKnapsack(int arr[], int k, int n) {
    int t[n+1][k+1];
       for(int i=0;i<n+1;i++){
        for(int j=0;j<k+1;j++){
         if(i==0 || j==0)
           t[i][j] = 0;
        }
    }

       for(int i=1;i<n+1;i++){
        for(int j=1;j<k+1;j++){
         if(arr[i-1] <= j){
           t[i][j] = max(arr[i-1] + t[i][j-arr[i-1]], t[i-1][j]);
           }
         else{
           t[i][j] = t[i-1][j];
           }
        } 
       }
       
    return t[n][k];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<unboundedKnapsack(arr,k,n)<<endl;
    }
  
