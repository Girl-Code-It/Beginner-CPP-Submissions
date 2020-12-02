ListNode* removeElements(ListNode* head, int val) {
        

        if(head == nullptr)
            return head;
        
        //remove all head having val == val
        
        while(head && head->val == val)
            head = head->next;
        
        //remove rest elements
        
        ListNode* current = head;
        ListNode* prev = nullptr;
        
        while(current != nullptr)
        {
            if(current->val == val)
            {
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }
        return head;
    }
