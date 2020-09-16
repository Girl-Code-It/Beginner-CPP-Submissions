// https://practice.geeksforgeeks.org/problems/get-minimum-squares/0

class Solution{
	public:
	int MinSquares(int n)
	{
	    int* dp = new int[n + 1]; 
  
    dp[0] = 0;
    dp[1] = 1; // 1*1 
    dp[2] = 2; // 1*1 + 1*1
    dp[3] = 3; // 1*1 + 1*1 + 1*1
  
    for (int i = 4; i <= n; i++) { 
        // max value is i as i can always be represented as 1*1 + 1*1 + ... 
        dp[i] = i; 
  
        // Go through all smaller numbers to recursively find minimum 
        for (int x = 1; x <= ceil(sqrt(i)); x++) { 
            int temp = x * x; 
            if (temp > i) 
                break; 
            else
                dp[i] = min(dp[i], 1 + dp[i - temp]); 
        } 
    } 
  
    // Store result and free dp[] 
    int res = dp[n]; 
    delete[] dp; 
  
    return res; 
	}
};
