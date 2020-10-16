/* https://leetcode.com/problems/friend-circles/

Problem based on Disjoint set(DFS).

Time complexity:- O(E+V) where E is the no of edges and V is the no of vertices.
*/

class Solution {
    vector <int> friendsCircle;
public:
    void union_op(int from, int to) 
    {
        int p1 = find(from);
        int p2 = find(to);
        
        friendsCircle[p1] = p2;
    }
    
    int find(int v) 
    {
        if(friendsCircle[v] == v) 
            return v;
        return find(friendsCircle[v]);
    }
    
    int findCircleNum(vector<vector<int>>& M) 
    {
        int n = M.size();
        friendsCircle.resize(n);
        
        for(int i = 0; i < n; i++)
            friendsCircle[i] = i;
        
        for(int i = 0; i < n; i++) 
        {
            for(int j = i+1; j < n; j++) 
            {
                if(M[i][j] == 1) 
                    union_op(i,j);
            }
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(friendsCircle[i] == i)
                ans++;
        }
        return ans;
    }
};