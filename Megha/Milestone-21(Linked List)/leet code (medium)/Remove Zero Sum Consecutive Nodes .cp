// 1171. Remove Zero Sum Consecutive Nodes from Linked List

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* newHead=new ListNode();
        newHead->next = head;
        ListNode* current=newHead;
        
        while(current){
            head=current->next;
        int sum=0;
        while(head){
            sum = sum + head->val;
             if(sum == 0){
                 current->next=head->next;
             }
            
            head=head->next;
        }
            current=current->next;
        }
        return newHead->next;
    }
};
