// https://leetcode.com/problems/clone-graph/

/*
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
// Time Complexity - O(E*V)
class Solution 
{
    void dfs(Node* curr, Node* node, unordered_map<int, Node* > &visited)
    {
        visited[node->val] = node;
        for(auto ele : curr->neighbors)
        {
            if(visited.find(ele->val) == visited.end())
            {
                Node* newNode = new Node(ele->val);
                (node->neighbors).push_back(newNode);
                dfs(ele, newNode, visited);
            }
            else
                (node->neighbors).push_back(visited[ele->val]);
        }
    }
public:
    Node* cloneGraph(Node* node)
    {
        // If Graph is Empty then return NULL
        if(!node)
        return NULL;

        // Map to check, node is already made or not
        unordered_map<int, Node*> visited; 

        // Reference of clone garph
        Node* copy = new Node(node->val);

        //Store the reference the node, so further if need a reference then  directly take from map
        visited[node->val] = copy;

        // Now check all neighbors of copy node, Using DFS
        for(auto curr : node->neighbors)
        {
            // If Node is not made already, then make a newNode and store the reference & Apply dfs in newNode neighbors
            if(visited.find(curr->val) == visited.end())
            {
                Node* newNode = new Node(curr->val);
                (copy->neighbors).push_back(newNode);
                dfs(curr, newNode, visited);
            }
            else
                (copy->neighbors).push_back(visited[curr->val]);
        }

        //return the reference of clone graph
        return copy;
    }
};