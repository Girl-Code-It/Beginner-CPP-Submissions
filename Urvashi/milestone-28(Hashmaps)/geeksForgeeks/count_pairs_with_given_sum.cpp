int getPairCount(int *arr , int n , int sum)
{
	unordered_map<int , int> m ;
	
	for(int i = 0 ; i < n ; i++)
	    m[arr[i]]++ ;
	int count = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		count += m[sum - arr[i]] ;
		if(sum - arr[i] == arr[i])
		    count-- ;
	}
	return count/2 ;
}
