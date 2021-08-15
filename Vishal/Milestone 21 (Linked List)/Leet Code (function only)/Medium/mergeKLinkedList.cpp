/*
Solution 1: If you have done merge two sorted list, then merge two list k-1 times.
TC: O(K*N), SC:  O(1)
*/

class Solution
{
public:
    ListNode *mergeList(ListNode *a, ListNode *b)
    {
        if (!a)
            return b;
        if (!b)
            return a;

        ListNode *curr;
        if (a->val < b->val)
        {
            curr = a;
            a = a->next;
        }
        else
        {
            curr = b;
            b = b->next;
        }
        ListNode *head = curr;
        while (a && b)
        {
            if (a->val < b->val)
            {
                curr->next = a;
                a = a->next;
            }
            else
            {
                curr->next = b;
                b = b->next;
            }
            curr = curr->next;
        }
        if (a)
            curr->next = a;
        else
            curr->next = b;
        return head;
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        int k = lists.size();
        if (k == 0)
            return NULL;
        if (k == 1)
            return lists[0];

        ListNode *curr = mergeList(lists[k - 1], lists[k - 2]);

        for (int i = k - 3; i > 0; i--)
            curr = mergeList(lists[i], curr);

        return k == 2 ? curr : mergeList(lists[0], curr);
    }
};

/*
Solution 2: Using Priority Queue, Insert every node into queue.
TC: O(NLogK), SC: O(N)
*/

class Solution
{
public:
    struct compare
    {
        bool operator()(const ListNode* l1, const ListNode* l2)
        {
            return l1->val > l2->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        priority_queue<ListNode*, vector<ListNode*>, compare> q;

        for(auto l : lists)
        {  
             if(l)
                q.push(l);
        }

        ListNode pre(0);
        ListNode *node = &pre;

        while (q.size())
        {
            ListNode *top = q.top();
            q.pop();

            node->next = top;
            node = node->next;
            if(top->next)
                q.push(top->next);

        }

        return pre.next;
    }
};