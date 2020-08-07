class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>q;
        for(auto i : matrix)
        {
            for(auto y : i)
            {
                q.push(y);
                if(q.size() > k)
                    q.pop();
            }
        }
        return q.top();
    }
};
