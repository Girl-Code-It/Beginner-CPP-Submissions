//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        
        int count = 0;
        while(temp1){
            count++;
            temp1=temp1->next;
        }
        
        if(n==count){
            return temp->next;
        }
        
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        
        ListNode* temp2 = temp->next;
        temp->next = temp2->next;
        return head;
    }
};
