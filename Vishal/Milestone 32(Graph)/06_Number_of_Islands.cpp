class Solution {
public:
    void dfs(vector<vector<char>> &g, int r, int c, int &m, int &n, int *dr, int*dc){
        g[r][c]='0';
        for(int i=0; i<4; i++){
            int rr = r+dr[i];
            int cc = c+dc[i];
            
            if(rr<0||rr>=m||cc<0||cc>=n||g[rr][cc]=='0') continue;
            
            dfs(g, rr, cc, m, n, dr, dc);
        }
    }
    
    
    int numIslands(vector<vector<char>>& g) {
        int m=g.size();
        int n=m?g[0].size():0;
        
        int count=0;
        
        int dr[] = {0,0,1,-1};
        int dc[] = {1,-1,0,0};
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(g[i][j]=='1'){
                    count++;
                    dfs(g, i, j, m, n, dr, dc);
                }
            }
        }
        return count;
    }
};