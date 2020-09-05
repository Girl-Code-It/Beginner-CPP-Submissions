/* (https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication/0)

Question:- Given a sequence of matrices, find the most efficient way to multiply these matrices together. We have to find the way which costs minimum.

How are we defining coat of matrix multiplication ?
=> Let's asssume two matrices are there of order 10X30 and 30X20 so cost of multiplication of them will be 10*30*20 , we will take the common order element only once .

*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int DP[1001][1001];

// Solution1:- Recursive..
int Cost(int *arr , int i , int j)
{
    // If there is no element in the array then we don't have any matrix .
    if(i > j)
        return 0;
    
    // If there is only one element in the array then we can't find the order of the matrix as order of matrix at ith index is arr[i-1]*arr[i].
    if(i == j)
        return 0;
    
    int Minimum = INT_MAX;
    
    // moving from first matrix which will be at index 1 and its order will be arr[0]*arr[1] 
    // to last matrix which will be at index n-2 and its order will be arr[n-3]*arr[n-2] .
    for(int k = i ; k <= j-1 ; k++)
    {
        // splitting the problem into two parts and finding answers of both parts and adding cost of multiplying both answers in temp.
        int tempAns = Cost(arr , i , k) + Cost(arr , k+1 , j) + 
            arr[i-1]*arr[k]*arr[j]; // this is cost of multiplying the left and right answers.

        // getting minimum of all costs.
        if(tempAns < Minimum)
            Minimum = tempAns;
    }
    return Minimum;
    
}

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
