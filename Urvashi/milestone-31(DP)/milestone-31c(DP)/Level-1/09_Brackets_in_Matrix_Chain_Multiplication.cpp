//  https://practice.geeksforgeeks.org/problems/brackets-in-matrix-chain-multiplication/0/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int DP[1001][1001];

// Solution2:- Recursive + Memoization..
int Cost(int *arr , int i , int j)
{
    if(i >= j)
        return 0;
    
    int Minimum = INT_MAX;

    if(DP[i][j] != -1)
        return DP[i][j];
        
    for(int k = i ; k <= j-1 ; k++)
    {
        int tempAns = Cost(arr , i , k) + Cost(arr , k+1 , j) + arr[i-1]*arr[k]*arr[j];

        if(tempAns < Minimum)
            Minimum = tempAns;
    }
    return DP[i][j]=Minimum;
    
}
int main()
{
    int n,t;
    cin >> t;
    
    while(t--)
    {
        cin>>n;
        int arr[n];
        // order of matrix at index i will be arr[i-1]*arr[i].
        for(int i = 0 ; i < n ; i++)
        {
             cin>>arr[i];
        }
        memset(DP , -1 , sizeof(DP));

        cout<<Cost(arr , 1 , n-1) << "\n";
    }
}
