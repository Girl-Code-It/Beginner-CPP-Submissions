#include<unordered_map>

bool CheckDuplicateWithinK(int arr[], int n, int k)
{
    //Store last index
    unordered_map<int,int>m;
    
    for(int i=0; i<n; i++)
    {
        if(m.find(arr[i]) != m.end() && i - m[arr[i]] <= k)
            return true;
            
        m[arr[i]] = i;
    }
    return false:
}