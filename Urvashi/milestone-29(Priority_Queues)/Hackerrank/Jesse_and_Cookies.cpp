int cookies(int k, vector<int> A) {
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i = 0 ; i < A.size() ; i++){
        q.push(A[i]);
    }
    int count = 0 ;
    while(q.size() >= 2)
    {
        if(q.top() >= k)
        return count ;
        else{
            int x = q.top() ; q.pop() ;
            int y = q.top() ; q.pop() ;
            q.push(1*x + 2*y);
            count++ ;
        }
    }
    if(!q.empty() && q.top() >= k) return count ;
    else return -1 ;
}
