/* (https://leetcode.com/problems/longest-consecutive-sequence/)

Time complexity:- O(N)

Approach:-
1. Create an empty hash.
2. Insert all array elements to hash.
3. Do following for every element arr[i]
4. Check if this element is the starting point of a subsequence. To check this, simply look for arr[i] – 1 in the hash, if not found, then this is the first element a subsequence.
5. If this element is the first element, then count the number of elements in the consecutive starting with this element. Iterate from arr[i] + 1 till the last element that can be found.
6. If the count is more than the previous longest subsequence found, then update this.

*/
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        unordered_set<int> s;
        for (int i : nums)
            s.insert(i);
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i] - 1) == s.end())
            {
                int j = nums[i];
                while (s.find(j) != s.end())
                    j++;

                ans = max(ans, j - nums[i]);
            }
        }
        return ans;
    }
};