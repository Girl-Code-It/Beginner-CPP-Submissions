
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        while(head!=NULL){
            ans=ans<<1;  //we will left shift first each time
            ans |= head->val;  //we will do or with each value of head
            head = head->next;
        }
        return ans;
    }
};

//input=101 output=5
