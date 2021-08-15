/*
Solution 1: first find length of list then go to (len-n) from start and delete that node.
TC: O(2N), Two passes needed.

Solution 2: first move fast pointer to n times. Then move start and fast move one by one. The difference between slow
and fast node is n. As fast reach to last node, slow reach to (n-1)th node. Then delete nth node using temp pointer.
TC: O(N), single pass 
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head, *fast = head;
        while(n--){
            fast = fast->next;
        }
        if(fast == NULL)
            return head->next;
        
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};