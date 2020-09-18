// https://leetcode.com/problems/number-of-longest-increasing-subsequence/

/*
 First Refer Longest Increasing Subsequence.

 Twist...
 Now count Number of Longest Increasing Subsequence.

 Solution:
 Take one more array count which will count the number of occurance..
 
 Time Complexity - O(N^2), Space Complexity - O(N)
*/
class Solution
{
public:
    int findNumberOfLIS(vector<int> &arr)
    {
        int n = arr.size();

        if (n <= 1)
            return n;

        int length[n], count[n], maxLength = 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            length[i] = count[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (arr[j] < arr[i])
                {
                    if(length[i] < length[j] + 1)
                    {
                        length[i] = length[j] + 1;
                        count[i] = count[j];
                    }
                    else if (length[i] == length[j] + 1)
                        count[i] += count[j];
                }
            }
            maxLength = max(maxLength, length[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (length[i] == maxLength)
                ans += count[i];
        }

        return ans;
    }
};
