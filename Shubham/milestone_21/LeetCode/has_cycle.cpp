    bool hasCycle(ListNode *head) 
    {
        
       if(head == nullptr)
            return false;
        
        ListNode* p = head;
        ListNode* q = head;
        int flag = 0;
        
        while(1)
        {
            if(q == nullptr)
                return false;
            
            if(flag != 0 && p == q)
                return true;
            
            p = p->next;
            q = q->next;
            q = (q != nullptr) ? q->next : nullptr;
            flag = 1;
            
        }
        return false;
    }
