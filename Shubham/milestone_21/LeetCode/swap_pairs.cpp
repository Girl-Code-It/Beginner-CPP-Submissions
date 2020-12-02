 void swap(ListNode* p, ListNode* q)
    {
        int temp = p->val;
        p->val = q->val;
        q->val = temp;
    }
    ListNode* swapPairs(ListNode* head) 
    {
        
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* p = head, *q = head->next;
        
        while(q != nullptr && q->next != nullptr)
        {
            swap(p, q);
            p = p->next->next;
            q = q->next;
            q = (q->next != nullptr) ? q->next : q;
        }
        if(q->next == nullptr)
            swap(p, q);
        return head;
    }
