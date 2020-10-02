/* Time complexity:- O(V*E) where V is the no of vertices and E is the no of edges.

Approach:- As we have to make a deep copy of the given graph so we will take a visited array to store the value of the node
which we have vsisited. And if adjacent node of some vertice is stored in visited array then we will not visit it again 
we will just put that node in the adjacency list of that vertice.

*/
class Solution {
public:
    void dfs(Node* curr,Node* node,vector<Node *>& visited)
    {
        //Node* copy = new Node(node->val);
        visited[node->val] = node;
        
        // iterating every neighbour of current vertice.
        for(auto ele: curr->neighbors)
        {
            if(visited[ele->val] == NULL)
            {
                Node *newnode = new Node(ele->val);
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,visited);
            }
            else
                (node->neighbors).push_back(visited[ele->val]);
        }
    }

    Node* cloneGraph(Node* node) {
    	// if graph is empty then just return null.
        if(node==NULL)
            return NULL;
        
        // assuming that we will not have more than 1000 nodes in the graph.
        vector<Node *> visited(1000,NULL);
        
        // storing the first node of the copied graph.
        Node* copy = new Node(node->val);
        
        // also storing it in the visited array so that it will not be processed again.
        visited[node->val] = copy;
        
        //Iterate for all neighbors
        for(auto curr: node->neighbors)
        {
        	// if value of the adjacent node is not present in the visited array means it is not processed .
            if(visited[curr->val] == NULL)
            {
            	// so, we will make a new node to store adjacent node value and will push it in adjacency list and will process 
            	// adjacent nodes for this adjacent node.
                Node *newnode = new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                dfs(curr,newnode,visited);
            }
            // but if adjacent node is present in visited array then we will just simply add it in adjacency list.
            else
                (copy->neighbors).push_back(visited[curr->val]);
        }
        // will return the adjacency list at the end.
        return copy;
    }
};
