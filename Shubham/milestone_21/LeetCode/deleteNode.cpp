int getLength(ListNode* node)
    {
        ListNode* p = node;
        int length = 0;
        
        while(p->next != nullptr)
        {
            length++;
            p = p->next;
        }
        return ++length;
    }
    void deleteNode(ListNode* node) {
        
        int n = getLength(node);
        ListNode* p = node;
        int A[--n];
        p = p->next;
        int i=0;
        while(p != nullptr)
        {
            A[i++] = p->val;
            p = p->next;
        }
        
        p = node;
        
        for(int i=0; i<n; i++)
        {
            p->val = A[i];
            if(i == n-1)
                p->next = nullptr;
            else
                p = p->next;
        }
    
    }
