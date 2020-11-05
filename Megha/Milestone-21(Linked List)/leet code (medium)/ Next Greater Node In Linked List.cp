// Next Greater Node In Linked List

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        int ans = 0;
        ListNode* temp1=head;
        ListNode* temp2=temp1->next;
        while(temp1){
            temp2=temp1->next;
            while(temp2){
                if(temp2->val > temp1->val){
                    ans = temp2->val;
                     v.push_back(ans);
                    break;
                }
                    temp2=temp2->next;
            }
            if(temp2 == NULL){
                ans=0;
                 v.push_back(ans);
            }
            temp1=temp1->next;
        }
        return v;
    }
};
