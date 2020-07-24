// https://codezen.codingninjas.com/practice/470/2297/find-missing-numbers

void FindMissingElements(int arr[], int n){
	unordered_set<int>s;
    int l = arr[0] , h = arr[0] ;
    for(int i = 0 ; i < n ; i++)
    {
        l = (l > arr[i]) ? arr[i] : l ;
        h = (h < arr[i]) ? arr[i] : h ;
        s.insert(arr[i]) ;
    }
    for(int i = l ; i <= h ; i++ )
    {
        if(s.find(i) == s.end())
            cout << i << " ";
    }
}

