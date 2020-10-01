void FindMissingElements(int arr[], int n){
	unordered_set<int>s;
    sort(arr , arr+n) ;
    int l = arr[0] , h = arr[n - 1] ;
    for(int i = 0 ; i < n ; i++)
        s.insert(arr[i]) ;
    
    for(int i = l ; i <= h ; i++ )
    {
        if(s.find(i) == s.end())
            cout << i << " ";
    }
}

