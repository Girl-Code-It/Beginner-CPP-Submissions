class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int temp ;
    KthLargest(int k, vector<int>& nums) {
        temp = k ;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            q.push(nums[i]) ;
            if(q.size() > k)
                q.pop() ;
        }
    }
    
    int add(int val) {
        q.push(val) ;
        if(q.size() > temp)
            q.pop();
        return q.top();
    }
};

