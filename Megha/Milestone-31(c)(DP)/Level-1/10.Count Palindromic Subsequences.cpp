//https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1

#define r 1000000007;
class Solution{
    public:
    /*You are required to complete below method */
    int countPS(string S)
{
    int n = S.length();
        int t[n][n];
        
        for(int l=0;l<n;l++){
            for(int i=0,j=l;j<n;i++,j++){
                if(l == 0){
                    t[i][j] = 1;
                }
                else if(l == 1){
                    t[i][j] = (S[i] == S[j])?3:2;
                }
                else{
                    if(S[i] == S[j]){
                        t[i][j] = t[i+1][j] + t[i][j-1] + 1;
                    }
                    else{
                        t[i][j] = t[i+1][j] + t[i][j-1] - t[i+1][j-1];
                    }
                }
                t[i][j] = t[i][j]%r;
            }
        }
        
        return t[0][n-1] % r;
}
 
};
