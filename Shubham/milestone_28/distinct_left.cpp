int FindDistinctCount(int* arr, int n,int k) {
/*Write your code here. 
*Don't write main().
*Don't take input, it is passed as function argument.
*Don't print output.
*Taking input and printing output is handled automatically.
*/ 
    sort(arr, arr + n);
    
    n = n - k;
    
    unordered_map<int, int> m; // element : freq
    
    for(int i = 0; i < n; i++)
        m[arr[i]]++;
   
    int unique_elements = 0;
    for(auto it : m)
    {
    	unique_elements++;
    }
    return unique_elements;
}


