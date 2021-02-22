//https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/submissions/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue<int> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                q.push(matrix[i][j]);
                if(q.size()>k)
                    q.pop();
            }
        }
        
        return q.top();
    }
};

