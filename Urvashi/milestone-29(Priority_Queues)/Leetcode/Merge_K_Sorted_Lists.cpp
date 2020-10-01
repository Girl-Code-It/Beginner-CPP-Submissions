
class Solution {
public:
    
    struct cmp
    {
        bool operator()(const ListNode* l1, const ListNode* l2)
        {
            return l1->val > l2->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp>q;
        
        for(auto i : lists)
        {
            if(i)
                q.push(i);
        }
        
        ListNode pre(0);
        ListNode *node = &pre;
        
        while(!q.empty())
        {
            ListNode* front = q.top();
            q.pop();
            
            node->next = front;
            node = node->next;
            if(front->next)
                q.push(front->next);
        }
        return pre.next;
    }
};
