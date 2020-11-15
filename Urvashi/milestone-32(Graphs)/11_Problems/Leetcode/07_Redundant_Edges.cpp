/* (https://leetcode.com/problems/redundant-connection/submissions/)

Time complexity:- O(V + E) by Disjoint set Union find
*/

class Solution {
public:
    vector<int> parent;
    
    int find(int u) 
    {
        if(u == parent[u])
            return u;
        return parent[u] = find(parent[u]);
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n+1);
        
        for(int i =1; i<=n; i++)
            parent[i] = i;
        
        for(int i=0; i<n; i++) 
        {
            int u = edges[i][0];
            int v = edges[i][1];
                
            int a = find(u), b = find(v);
            // if parent of u and v is same then they are already connected through a path so if we will
            // connect them again they will form a redundant edge and hence a cycle.
            if(a == b) 
                return {u, v};
            else 
                parent[a] = b;
        }
        return {};
    }
    };