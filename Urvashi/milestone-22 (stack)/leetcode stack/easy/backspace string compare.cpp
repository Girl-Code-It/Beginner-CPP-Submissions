class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        stack<char> a, b;

        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '#' && !a.empty())
                a.pop();
            else if (S[i] != '#')
                a.push(S[i]);
        }

        for (int i = 0; i < T.size(); i++)
        {
            if (T[i] == '#' && !b.empty())
                b.pop();
            else if (T[i] != '#')
                b.push(T[i]);
        }
        if (a == b)
            return true;
        else
            return false;
    }
};
