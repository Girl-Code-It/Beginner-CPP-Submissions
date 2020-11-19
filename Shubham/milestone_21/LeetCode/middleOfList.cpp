  int getLength(ListNode* head)
    {
        int length = 0;
        ListNode* p = head;
        
        while(p->next != nullptr)
        {
            length++;
            p = p->next;
        }
        return ++length;
    }
    ListNode* middleNode(ListNode* head) {
        
        int n = getLength(head);
        n--;
        int pos;
        if(n%2 == 0)
            pos = n/2;
        else
            pos = (n+1)/2;
        ListNode* p = head;
        for(int i=0; i<pos; i++)
        {
            p = p->next;
        }
        return p;
        
        
    }
