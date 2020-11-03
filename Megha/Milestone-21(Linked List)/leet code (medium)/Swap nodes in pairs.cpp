// Swap nodes in pairs in Linked List

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp1=head;
        ListNode* temp2=temp1->next;
        ListNode *current,*next1;
        
        while(temp1 && temp2){
            current=temp1->next;
            next1=current->next;
            current->next=temp1;
            if(next1==NULL || next1->next==NULL){
            temp1->next=next1;
                break;
             }
            else{
            temp1->next=next1->next;
            temp1=next1;}
        }
        return temp2;
    }
};
