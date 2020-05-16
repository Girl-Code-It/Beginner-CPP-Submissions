class Solution {
public:
    ListNode* reversed( ListNode* head)
    {
        ListNode* prev=NULL;
        while(head)
        {
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head ,*fast=head;
        while(fast && fast->next)
        {
            slow= slow->next;
            fast = fast->next->next;
        }
        slow=reversed(slow);
        while(slow)
        {
            if(slow->val != head->val)
            {return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
