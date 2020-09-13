bool CheckDuplicateWithinK(int arr[], int n, int k){
	unordered_set<int>s;
    for(int i = 0 ; i < n ; i++)
    {
        if(s.find(arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
        
        if(i >= k)
            s.erase(arr[i-k]) ;
    }
    return false ;
}

