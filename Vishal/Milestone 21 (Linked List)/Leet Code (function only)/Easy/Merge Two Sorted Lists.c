struct ListNode* mergeTwoLists(struct ListNode* l1,struct ListNode*l2)
{
    struct ListNode* l3 = (struct ListNode*)calloc(1,sizeof(struct ListNode));
    struct ListNode* head = l3;

    while(l1 && l2)
    {
        l3 -> next = (l1 -> val > l2 -> val) ? l2 : l1;

        if(l3 -> next == l1)
            l1 = l1 -> next;
        else
            l2 = l2 -> next;
            
        l3 = l3 -> next ;
    }

    if(l1)
        l3 -> next = l1;

    if(l2)
        l3 -> next = l2;

    return head -> next;
}