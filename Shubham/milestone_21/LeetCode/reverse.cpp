int getLength(ListNode* head)
    {
        ListNode* p = head;
        int length = 0;
        
        while(p != nullptr)
        {
            length++;
            p = p->next;
        }
        return length;
    }
    ListNode* reverseList(ListNode* head) {
        
        int n = getLength(head);
        if(n==0)
            return nullptr;
        int A[n], i=0;
        ListNode* p = head;
        while(p != nullptr)
        {
            A[i++] = p->val;
            p = p->next;
        }
        i--;
        
        p = head;
        
        while(p != nullptr)
        {
            p->val = A[i--];
            p = p->next;
        }
        return head;
        
        
        
    }
:w
:q

:q

