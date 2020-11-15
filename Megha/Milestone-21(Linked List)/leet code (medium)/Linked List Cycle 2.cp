// https://leetcode.com/problems/linked-list-cycle-ii/submissions/

class Solution {
public:
    ListNode *Cycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = Cycle(slow);
        ListNode* fast = head;
        if(slow == NULL){
            return NULL;
        }
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};
