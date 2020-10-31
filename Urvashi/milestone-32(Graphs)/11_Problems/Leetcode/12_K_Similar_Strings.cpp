/* (https://leetcode.com/problems/k-similar-strings/)

DFS + Backtracking

Time complexity:- O(N)
*/
class Solution
{
public:
    void dfs(const string &a, string &b, int curr, int n, int &res)
    {
        int idx = curr;
        while (idx < a.size())
        {
            if (a[idx] != b[idx])
                break;
            ++idx;
        }

        if (idx == a.size())
            res = min(res, n);
        else
        {
            for (int i = idx + 1; i < b.size(); i++)
            {
                if (b[i] == a[idx])
                {
                    swap(b[i], b[idx]);
                    dfs(a, b, idx, n + 1, res);
                    swap(b[i], b[idx]); // backtrack
                    if (b[idx] == a[i])
                        break;
                }
            }
        }
    }

    int kSimilarity(string A, string B)
    {
        int res = INT_MAX;
        dfs(A, B, 0, 0, res);
        return res;
    }
};