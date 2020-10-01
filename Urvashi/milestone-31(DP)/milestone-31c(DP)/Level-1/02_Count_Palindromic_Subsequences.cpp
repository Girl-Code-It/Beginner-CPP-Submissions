//  https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1

int countPS(string str)
{
    int n = str.size();
    int DP[n+1][n+1];
    
    // so that no garbage value is stored in our DP matrix
    memset(DP , 0 , sizeof(DP));
    // single character is always a palindrome.
    for(int i = 0 ; i < n ; i++)
        DP[i][i] = 1;
    
    for(int j = 2 ; j <= n ; j++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            int k = i + j - 1; // ith position from last
            
            // taking it palindrome if its last and first char are equal.
            if(str[i] == str[k]) 
                DP[i][k] = DP[i+1][k] + DP[i][k-1] + 1;
            else
                DP[i][k] = DP[i+1][k] + DP[i][k-1] - DP[i+1][k-1]; 
        }
    }
    // returning count for whole string.
    return DP[0][n-1];
}
 
