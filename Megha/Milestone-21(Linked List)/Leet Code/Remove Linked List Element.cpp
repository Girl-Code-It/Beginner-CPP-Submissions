
//Remove Linked List Element

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        while(head && head->val==val){
            head=head->next;
        }
        while(temp && temp->next){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            else{
            temp=temp->next;}
        }
        return head;
    }
};
