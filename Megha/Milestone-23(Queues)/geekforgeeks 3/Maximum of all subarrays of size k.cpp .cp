vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    vector <int> v;
    queue <int> q;
    
    for(int i=0;i<=n-k;i++){
        int max=0;
        for(int j=i;j<k+i;j++){
            if(arr[j] > max){
                max=arr[j];
            }
        }
        v.push_back(max);
    }
    
    return v;
}
