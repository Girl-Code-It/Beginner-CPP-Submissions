//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1

int t[1001][1001];

class Solution{
public:
    int solve(int arr[], int i,int j){
        if(i>=j){
            return 0;
        }
        
        memset(t,-1,sizeof(t));
        
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        int ans = INT_MAX;
        for(int k=i;k<j;k++){
            int temp = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            ans = min(ans,temp);
        }
        
        return t[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        int i=1,j=N-1;
        return solve(arr,i,j);
    }
};
