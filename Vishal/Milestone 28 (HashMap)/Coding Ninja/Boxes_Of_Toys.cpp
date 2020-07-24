int FindMaximumEqualCount(int arr[], int n, int k)
{
    int sum[n],maxSum = 0,rem;
    unordered_map<int,int>m;
    
    sum[0] = arr[0];
    for(int i=1;i<n;i++)
        sum[i] = sum[i-1] + arr[i];
        
    for(int i=0; i<n; i++)
    {
        rem = sum[i]%k;
        
        if(rem == 0)
            maxSum = maxSum < sum[i] ? sum[i] : maxSum;
            
        else if(m.find(rem) == m.end())
            m[rem] = i;
        
        else if(maxSum < sum[i] - sum[m[rem]])
            maxSum = sum[i] - sum[m[rem]];
    }
    
    return maxSum/k;
}