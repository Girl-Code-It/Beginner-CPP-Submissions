
//https://leetcode.com/problems/reorder-list/submissions/

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode *prev,*next;
        prev = NULL;
        
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
public:
   void reorderList(ListNode* head) {
        if(head==NULL){
            return;
        }
       
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
       
       ListNode* second = slow->next;
			slow->next = NULL;// need to close first part
 
			// now should have two lists: head and fast
 
			// reverse order for second part
	second = reverse(second);
       
        ListNode* temp1 = head;
        ListNode* temp2 = second;
       
        while(temp2){
            
            ListNode* p1 = temp1->next;
            ListNode* p2 = temp2->next;
            temp1->next = temp2;
            temp2->next = p1;
            temp1 = p1;
            temp2 = p2;
        }
           
       }
    
};
