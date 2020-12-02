    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* p = head;
        ListNode* q;
        if(head != nullptr)
            q = head->next;
        
        
        while(q != nullptr)
        {
            if(p->val != q->val)
            {
                p = p->next;
                q = q->next;
            }
            else
            {
                p->next = q->next;
                delete q;
                q = p->next;
            }
        }
        return head;
    }
