
//Pallindrome linked list

class Solution {
public:
   ListNode* Reverse(ListNode* head) {
       ListNode *next,*prev;
       prev = NULL;
       while(head){
           next = head->next;
           head->next = prev;
           prev = head;
           head = next;
       }
       return prev;
   }
    
    bool isPalindrome(ListNode* head) {
       ListNode *slow = head,*fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow = Reverse(slow);
        
        while(slow){
            if(slow->val != head->val){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
