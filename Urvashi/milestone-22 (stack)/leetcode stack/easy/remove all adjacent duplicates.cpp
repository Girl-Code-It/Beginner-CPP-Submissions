class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> s1;

        for (int i = 0; i < S.size(); i++)
        {
            if (!s1.empty() && s1.top() == S[i])
                s1.pop();
            else
                s1.push(S[i]);
        }

        string temp = "";
        while (!s1.empty())
        {
            temp += s1.top();
            s1.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};
