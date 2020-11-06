
//Find the middle of the linked list

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp2 && temp2->next){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        return temp1;
    }
};
