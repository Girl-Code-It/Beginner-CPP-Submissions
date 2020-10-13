class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans = "";
        stack<char> s1;

        if (s == "")
            return "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                if (!s1.empty())
                {
                    s1.push(s[i]);
                    ans += s[i];
                }
                else
                    s1.push(s[i]);
            }
            if (s[i] == ')')
            {
                s1.pop();
                if (!s1.empty())
                    ans += s[i];
            }
        }
        return ans;
    }
};
