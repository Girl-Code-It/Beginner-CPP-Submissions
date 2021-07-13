//https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int t[n][m];
        int ans = 0;
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i == n-1 || j == m-1){
                    t[i][j] = mat[i][j];
                }
                else{
                    if(mat[i][j] == 0){
                        t[i][j] = 0;
                    }
                    else{
                        int mn = min(min(t[i+1][j], t[i][j+1]), t[i+1][j+1]);
                        t[i][j] = mn+1;
                    }
                }
                
                ans = max(ans,t[i][j]);
            }
        }
        
        return ans;
    }
};
