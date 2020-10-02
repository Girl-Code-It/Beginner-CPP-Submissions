/* Time complexity:- O(E) where E is the no of edges and because we are travelling every edge only once.

Approach:- We have to iterate the route in lexicographical order . we have to return the route with lowest order.
So, we will make graph and traverse through each and every vertice and will go to their adjacent nodes and will 
return the path in which our lexicographical order is lowest.

We will take a multiset to maintain the lexicographical order of the adjacency lists of every vertice.

We will take a map to directly access a particular node by its key in O(1) time.

*/

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> adj;
        vector<string> ans;
        int n = tickets.size();
        
        // making graph.
        for(int i = 0; i < n; i++)
            adj[tickets[i][0]].insert(tickets[i][1]);
        
        stack<string> mystack;
        // as we have to start with JFK so we will push it in stack first.
        mystack.push("JFK");
        
        while(!mystack.empty())
        {
        	// everytime we will take a vertice from the top of the stack and will check if it has any adjacent route or not if not then we will
        	// simply add this vertice to our ans as we have processed it.
            string src = mystack.top();
            if(adj[src].size() == 0)
            {
                ans.push_back(src);
                mystack.pop();
            }
            
            // if this vertice has any adjacent route then first we will take the first route from all the adjacent routes and will push it into stack 
            // and will erase it from adjacency list as we are processing it.
            else
            {
                auto dst = adj[src].begin();
                mystack.push(*dst);
                adj[src].erase(dst);
            }
        }
        // we are popping from the stack and we have pushed our JFK first in the stack so it will be popped at the last so we will get the ans in reverse.
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
