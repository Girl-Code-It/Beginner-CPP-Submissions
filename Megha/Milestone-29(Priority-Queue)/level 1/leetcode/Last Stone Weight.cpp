//https://leetcode.com/problems/last-stone-weight/submissions/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>> q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        
        while(q.size() >= 2){
            int x = q.top(); q.pop();
            int y = q.top(); q.pop();
            if(x-y > 0){
                q.push(x-y);
            }
        }
        
        return q.empty()?0:q.top();
    }
};
