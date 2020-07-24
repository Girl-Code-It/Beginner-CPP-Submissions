int ReturnMinOperationCount(int arr[], int n) 
{
    unordered_map<int,int>m;
    
    for(int i=0; i<n; i++)
        m[arr[i]]++;
        
    int max_count = 0;
    
    for(auto itr : m)
        if(max_count < itr.second)
            max_count = itr.second;
            
    return n - max_count;
}