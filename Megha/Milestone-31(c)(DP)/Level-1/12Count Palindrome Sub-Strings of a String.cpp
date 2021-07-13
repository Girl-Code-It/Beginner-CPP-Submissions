//https://practice.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string0652/1#

int CountPS(char S[], int N)
{
    int count = 0;
    bool dp[N][N];
  
    for(int g=0;g<N;g++){
        for(int i=0,j=g;j < N;i++,j++){
            if(g == 0){
                dp[i][j] = true;
            }
            else if(g == 1){
                if(S[i] == S[j]){
                    dp[i][j] = true;}
                else{
                    dp[i][j] = false;
                }
            }
            else{
                if(S[i] == S[j] && dp[i+1][j-1] == true){
                    dp[i][j] = true;
                }
                else{
                    dp[i][j] = false;;
                }
            }
            
            if(dp[i][j]){
            count++;}
        }
    }
    
    return count-N;
}
