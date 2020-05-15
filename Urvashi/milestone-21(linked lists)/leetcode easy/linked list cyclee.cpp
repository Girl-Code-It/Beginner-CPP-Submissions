class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) 
            return false;
        ListNode * slow=head,  *fast=head-> next;
        while(slow !=fast) 
            {
        if(fast==NULL ||fast->next==NULL) {
            return false;
       } 
        slow=slow->next;
        fast=fast->next->next;}
        return true;
    }
};
