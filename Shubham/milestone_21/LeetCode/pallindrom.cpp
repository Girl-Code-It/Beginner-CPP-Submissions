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
    bool isPalindrome(ListNode* head) {
        
        int len = getLength(head);
        if(len == 0)
            return true;
        int A[len];
        
        ListNode* p = head;
        int i=0;
        while(p != nullptr)
        {
            A[i++] = p->val;
            p = p->next;
        }
        
        //checking pallindrom
        int low = 0, high = len-1, flag = 0;
        for(; low<=high; low++, high--)
        {
            if(A[low] != A[high])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            return true;
        return false;
        
        
    }
