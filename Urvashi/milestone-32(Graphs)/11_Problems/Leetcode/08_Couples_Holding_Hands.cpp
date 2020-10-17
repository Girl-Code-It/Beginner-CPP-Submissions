/* (https://leetcode.com/problems/couples-holding-hands/)

Time complexity:- O(N)
*/
class Solution
{
public:
    int find(int t, vector<int> &p)
    {
        return p[t] == t ? t : p[t] = find(p[t], p);
    }

    int minSwapsCouples(vector<int> &row)
    {
        vector<int> p(row.size(), 0);
        int minSwaps = 0;
        // giving all the couples a unique identity.
        for (int i = 0; i < row.size(); i++)
            p[i] = i - (i % 2);

        // we will check if the parent of alternate people is same or not. if not same means they are not a
        // couple so we will mke a swap, otherwise we will add them in a group.
        for (int i = 0; i < row.size(); i += 2)
        {
            int a = find(row[i], p);
            int b = find(row[i + 1], p);
            if (a != b)
                minSwaps++;
            p[b] = a;
        }

        return minSwaps;
    }
};