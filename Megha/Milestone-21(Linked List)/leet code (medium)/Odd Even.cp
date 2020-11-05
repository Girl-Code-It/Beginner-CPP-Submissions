//https://leetcode.com/problems/odd-even-linked-list/submissions/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return head;
        }
    ListNode* temp1 = head;
    ListNode* temp2 = head->next;
    ListNode* newHead = head;
    ListNode* temp = head->next;
    while(temp1 && temp2){
    temp1->next = temp2->next;
        if(temp2->next == NULL){
            break;
        }
    temp1=temp1->next;
    temp2->next = temp1->next;
    temp2=temp2->next;
    }
        temp1->next = temp;
        return newHead;
    }
};
