unordered_map<Node*,Node*>m;
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        
        if(m.find(head) != m.end())
            return m[head] ;
        
        Node* NewNode = new Node(head->val , NULL , NULL); 
        m.insert({head , NewNode}) ;
        
        NewNode->next = copyRandomList(head->next);
        NewNode->random = copyRandomList(head->random);
        return NewNode;
    }
};
