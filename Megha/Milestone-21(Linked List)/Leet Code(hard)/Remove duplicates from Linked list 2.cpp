//Remove duplicates from Linked list 2

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newHead = new ListNode();
        newHead->next = head;
        ListNode* prev = newHead;
        ListNode* current = head;
        
        while(current){
            while(current->next && (prev->next->val == current->next->val)){
                current=current->next;
            }
            if(prev->next == current){
                prev = prev->next;
            }
            else{
                prev->next = current->next;
            }
            current = current->next;
        }
        
        return newHead->next;
    }
};
