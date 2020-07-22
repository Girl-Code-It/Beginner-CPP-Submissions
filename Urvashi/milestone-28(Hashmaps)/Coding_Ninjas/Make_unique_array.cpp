int CountExtraElements(int arr[], int n) {
	unordered_map<int , int>m ;
    for(int i = 0 ; i < n ; i++)
        m[arr[i]]++ ;
    
    return n - m.size() ;
}
