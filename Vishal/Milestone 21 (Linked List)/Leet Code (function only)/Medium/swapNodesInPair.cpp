/*
Recursive Solution: TC: O(N), SC: O(N)(Implicit call stack)
*/

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *next = head->next;
        head->next = swapPairs(next->next);
        next->next = head;

        return next;
    }
};

/*
Iterative Solution: TC: O(N), SC: O(1)
*/
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *curr = head;
        ListNode *newHead = head->next;
        while (curr && curr->next)
        {
            ListNode *temp = curr;
            curr = temp->next;
            temp->next = curr->next;
            curr->next = temp;
            curr = temp->next;
            if (curr && curr->next)
                temp->next = curr->next;
        }
        return newHead;
    }
};