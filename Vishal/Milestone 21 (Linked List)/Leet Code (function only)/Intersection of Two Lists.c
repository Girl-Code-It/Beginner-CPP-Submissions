struct ListNode* getIntersectionNode(struct ListNode* headA,struct ListNode* headB)
{
    struct ListNode *temp = headA,*temp1 = headB;
    int A_size = 0,B_size = 0;

    while(temp)
    {
        A_size++;
        temp = temp -> next;
    }
    while(temp1)
    {
        B_size++;
        temp1 = temp1 -> next;
    }

    temp = headA,temp1 = headB;

    while(temp && A_size > B_size)
    {
        A_size--;
        temp = temp -> next;
    }

    while(temp1 && B_size > A_size)
    {
        B_size--;
        temp1 = temp1 -> next;
    }

    while(temp && temp1)
    {
        if(temp == temp1)
            return temp;
        temp1 = temp1 -> next;
        temp = temp -> next;
    }
    
    return NULL;
}