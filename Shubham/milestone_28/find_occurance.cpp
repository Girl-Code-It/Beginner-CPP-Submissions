void FindOccurance(int arr[],int size) {
	/*Write your code here.
	*Dont write main(). 
	*Dont take input, it is passed as function argument.
	*Print output as specified in question.
	*/
    unordered_map<int, int> m;
    
    for(int i = 0; i < size; i++)
        m[arr[i]]++;
   
    int even_count = 0, odd_count = 0;
    
    for(auto it : m)
    {
		if( it.second % 2 == 0)
            even_count++;
       	else
            odd_count++;
    }
 	cout << odd_count << " " << even_count;
}
