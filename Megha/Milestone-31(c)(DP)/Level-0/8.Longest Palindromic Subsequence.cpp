//https://leetcode.com/problems/longest-palindromic-subsequence/submissions/

int t[1001][1001];

class Solution {
public:
    int longestPalindromeSubseq(string s1) {
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        int n = s1.size();
        int m = s2.size();
        
        for(int i=0;i<n+1;i++){
          for(int j=0;j<m+1;j++){
            if(i==0 || j==0)
            t[i][j] = 0;
          }
        }
        
        for(int i=1;i<n+1;i++){
          for(int j=1;j<m+1;j++){
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else
            t[i][j] = max(t[i-1][j],t[i][j-1]);
          }
        }
        
        return t[n][m];
    }
};
