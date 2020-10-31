class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        int sum = 0;
        stack<int> s;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "D")
            {
                sum += 2 * s.top();
                s.push(2 * s.top());
            }

            else if (ops[i] == "C")
            {
                sum -= s.top();
                s.pop();
            }

            else if (ops[i] == "+")
            {
                int val1 = s.top();
                s.pop();
                int val2 = s.top();
                sum += val1 + val2;
                s.push(val1);
                s.push(val1 + val2);
            }

            else
            {
                s.push(stoi(ops[i]));
                sum += stoi(ops[i]);
            }
        }

        return sum;
    }
};
