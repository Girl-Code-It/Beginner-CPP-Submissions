vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    vector <int> v;
    deque <int> dq;
    
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    v.push_back(arr[dq.front()]);
    
    for(int i=k;i<n;i++){
        while(!dq.empty() && arr[i]>arr[dq.back()]){
            dq.pop_back();
        }
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        dq.push_back(i);
        v.push_back(arr[dq.front()]);
    }
    
    return v;
}
