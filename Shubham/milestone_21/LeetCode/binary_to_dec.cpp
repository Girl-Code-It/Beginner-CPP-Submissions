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
    int getDecimalValue(ListNode* head) {
        
        int n = getLength(head);
        int A[n], i=0;
        ListNode* p = head;
        while(p != nullptr)
        {
            A[i++] = p->val;
            p = p->next;
        }
        i--;
        int binary = 0, place =1;
        while(i>=0)
        {
            binary += A[i--] * place;
            place *= 2;
        }
        return binary;
    }
