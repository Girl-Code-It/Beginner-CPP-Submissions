class Solution
{
public:
    bool isPair(char opening, char closing)
    {
        if (opening == '(' && closing == ')')
            return true;
        else if (opening == '[' && closing == ']')
            return true;
        else if (opening == '{' && closing == '}')
            return true;
        return false;
    }

    bool isValid(string s)
    {

        stack<char> s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                s1.push(s[i]);
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (s1.empty() || !isPair(s1.top(), s[i]))
                    return false;
                else
                    s1.pop();
            }
        }
        return s1.empty() ? true : false;
    }
};
