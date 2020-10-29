// https://leetcode.com/problems/shortest-common-supersequence/

class Solution
{
public:
    string shortestCommonSupersequence(string str1, string str2)
    {
        int n = str1.size(), m = str2.size();
        int DP[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
            DP[i][0] = 0;

        for (int i = 0; i <= m; i++)
            DP[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (str1[i - 1] == str2[j - 1])
                    DP[i][j] = 1 + DP[i - 1][j - 1];
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }

        string result;

        int i = n, j = m;
        while (i > 0 && j > 0)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                result.push_back(str1[i - 1]);
                i--;
                j--;
            }
            else
            {
                if (DP[i - 1][j] > DP[i][j - 1])
                    result.push_back(str1[--i]);
                else
                    result.push_back(str2[--j]);
            }
        }

        while (i > 0)
            result.push_back(str1[--i]);

        while(j > 0)
            result.push_back(str2[--j]);

        reverse(result.begin(), result.end());
        return result;
    }
};