int countExtraElements(vector<int> A, int n)
{
    // Write your code here
    unordered_map<int, int> m; //element : freq
    for(int i = 0; i < n; i++)
        m[A[i]]++;
   
    int r = 0;
    
    for(auto it : m)
    {
        if(it.second > 1)
            r += it.second - 1;
    }
    return r;
}

