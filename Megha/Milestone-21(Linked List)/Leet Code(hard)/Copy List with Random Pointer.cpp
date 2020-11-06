
//https://leetcode.com/problems/copy-list-with-random-pointer/


class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL){
            return NULL;
        }
       
       Node* current = head;
       while(current){
           Node* temp = current->next;
           current->next = new Node(current->val);
           current->next->next = temp;
           current = temp;
       }
        
       current = head;
        while(current){
            if(current->random != NULL){
                current->next->random = current->random->next;
            }
            current=current->next->next;
        }
        
       Node* newHead = head->next;
        current = head;
        
        while(current && current->next){
            Node* temp2 = current->next;
            current->next = temp2->next;
            current = temp2;
        }
        return newHead;
    }
};
