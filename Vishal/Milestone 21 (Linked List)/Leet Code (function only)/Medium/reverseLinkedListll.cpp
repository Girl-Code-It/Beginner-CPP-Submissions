/*
Solution 1: Simply first go to (left)th node then reverse left..right nodes. then point next and prev pointer of 
reverse list appropriately.
*/
class Solution
{
public:
    ListNode *reverseList(ListNode *head, int size)
    {
        ListNode *next, *curr = head, *prev = NULL;
        while (curr && size--)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // if there is any next element then point reverse list end to next element.
        if (curr)
            head->next = curr;
        head = prev;
        return head;
    }
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head || !head->next || left == right)
            return head;
        ListNode *curr = head, *prev = NULL;
        int size = right - left + 1;
        while (--left)
        {
            prev = curr;
            curr = curr->next;
        }
        // if left == 1(reverse from begining)
        if (!prev)
            return reverseList(curr, size);
        //else point reverse list start to prev next.
        prev->next = reverseList(curr, size);
        return head;
    }
};