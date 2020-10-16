// https://leetcode.com/problems/longest-consecutive-sequence/

/* 
    Solution 1: Using Sorting which is very intuitive solution.
    Time complexity - O(NlogN), Space Complexity - O(1)
*/

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        // If its emoty, then sequence is not possible.
        if(nums.empty())
            return 0;
        
        sort(nums.begin(), nums.end());

        int ans = 0, count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            // If it is consecutive sequence, increase count
            if(nums[i] == nums[i-1] + 1)
                count++;

            // If previous and current num are equal then continue, else store max ans and reset count to 1.
            else if(nums[i] != nums[i-1])
            {
                ans = max(ans, count);
                count = 1;
            }
        }

        // It may be posible last element is in our sequence so return max of ans and count.
        return max(ans, count);
    }
};

/*
    Solution 2: Using Set
    Time complexity - O(N), Space Complexity - O(N)
*/
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int>s(nums.begin(), nums.end());
        int result = 0;
        
        for(int x : s)
        {
            if (s.find(x - 1) == s.end())
            {
                int y = x + 1;

                while (s.find(y) != s.end())
                {
                    y++;
                }
                result = max(result, y - x);
            }
        }
        return result;
    }
};