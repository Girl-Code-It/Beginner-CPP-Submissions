class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = new ListNode();
        ListNode *current_node = temp;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                current_node->next = l1;
                l1 = l1->next;
            }
            else
            {
                current_node->next = l2;
                l2 = l2->next;
            }
            current_node = current_node->next;
        }
        if (l1)
        {
            current_node->next = l1;
            l1 = l1->next;
        }
        if (l2)
        {
            current_node->next = l2;
            l2 = l2->next;
        }
        return temp->next;
    }
};
