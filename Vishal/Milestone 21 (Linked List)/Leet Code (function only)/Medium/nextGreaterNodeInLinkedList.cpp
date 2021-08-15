/*
Solution 1: Naive solution TC: O(N^2)
*/
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        ListNode *curr = head, *temp;
        vector<int> ans;

        while (curr->next)
        {
            temp = curr->next;
            while (temp && temp->val <= curr->val)
                temp = temp->next;
            if (temp)
                ans.push_back(temp->val);
            else
                ans.push_back(0);
            curr = curr->next;
        }
        ans.push_back(0);
        return ans;
    }
};

/*
Solution 2: Using Stack, store list in array and then find Next Greater Element using stack(Popular Question).
TC: O(N), SC: O(N).
*/

class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> res;
        stack<int> st;
        while (head)
        {
            res.push_back(head->val);
            head = head->next;
        }

        for (int i = res.size() - 1; i >= 0; i--)
        {
            int val = res[i];

            while (!st.empty() && st.top() <= res[i])
                st.pop();

            res[i] = st.empty() ? 0 : st.top();
            st.push(val);
        }
        return res;
    }
};