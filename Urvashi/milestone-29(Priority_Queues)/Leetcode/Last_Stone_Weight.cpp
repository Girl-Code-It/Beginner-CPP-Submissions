class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i = 0 ; i < stones.size() ; i++)
            q.push(stones[i]) ;
        
        while(q.size() >= 2)
        {
            int x = q.top() ; q.pop() ;
            int y = q.top() ; q.pop() ;
            if(x > y)
                q.push(x - y) ;
        }
        
        return (q.empty())? 0 : q.top() ;
    }
};
