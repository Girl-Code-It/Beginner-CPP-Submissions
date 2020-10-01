void FindOccurance(int arr[],int size) {
	unordered_map<int , int>m ;
    for(int i = 0 ;i < size ; i++)
        m[arr[i]]++ ;
    vector<int>v1 ,v2 ;
    for(auto i : m)
    {
        if(i.second % 2)
            v1.push_back(i.first) ;
        else
            v2.push_back(i.first) ;
    }
    cout<< v1.size()<<" "<<v2.size() ;
}

