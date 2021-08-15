class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *sentinel = new ListNode(0, head);
        ListNode *pred = sentinel;
        while (head)
        {
            if (head->next && (head->val == head->next->val))
            {
                // if it's a beginning of duplicates sublist, then skip all duplicates
                while (head->next && (head->val == head->next->val))
                    head = head->next;

                pred->next = head->next;
            }
            else
                pred = pred->next;
                
            head = head->next;
        }
        return sentinel->next;
    }
};