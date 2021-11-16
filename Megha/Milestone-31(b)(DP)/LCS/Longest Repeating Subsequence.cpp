//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int m = str.length(), n = str.length();
		    int t[m+1][n+1];
		    
		    for(int i=0;i<m+1;i++){
		        for(int j=0;j<n+1;j++){
		          if(i == 0 || j == 0)
		          t[i][j] = 0;
		        }
		    }
		    
		    for(int i=1;i<m+1;i++){
		        for(int j=1;j<n+1;j++){
		          if(str[i-1] == str[j-1] && i!=j)
		          t[i][j] = t[i-1][j-1] + 1;
		          else
		          t[i][j] = max(t[i-1][j], t[i][j-1]);
		        }
		    }
		    
		    return t[m][n];
		}
};
