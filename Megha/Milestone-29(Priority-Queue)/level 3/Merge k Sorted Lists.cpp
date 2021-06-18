//https://leetcode.com/problems/merge-k-sorted-lists/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    struct cmp{
        bool operator()(const ListNode* l1,const ListNode* l2){
            return l1->val > l2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp> q;
        for(auto head:lists){
            while(head!=NULL){
                q.push(head);
                head = head->next;
            }
        }
        
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        
        while(!q.empty()){
            head->next = new ListNode(q.top()->val);
            q.pop();
            head = head->next;
        }
        
        return ans->next;
    }
};
