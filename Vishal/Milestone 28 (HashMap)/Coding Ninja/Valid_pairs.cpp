#include<unordered_map>

bool CheckSumPairs(int arr[], int n, int k, int m)
{
    if(n&1)
        return false;
        
    unordered_map<int,int>freq;

    for(int i=0; i<n; i++)
        freq[arr[i]%k]++;

    int rem;
    for(int i=0; i<n; i++)
    {
        rem = arr[i]%k;

        if(2*rem == m)
        {
            if(freq[rem]&1)
                return false;
        }
        
        else if(freq[rem] != freq[(m - rem + k)%k])
            return false;
    }
    
    return true;
}