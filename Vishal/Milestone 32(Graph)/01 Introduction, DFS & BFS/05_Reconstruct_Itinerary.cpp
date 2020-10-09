// https://leetcode.com/problems/reconstruct-itinerary/

/*
    How to reach this solution ? 

    Goal(Observation) :
    1. Route will be started at JFK.
    2. Cover all route exactly once.
    3. If there exist a cycle then, ticket can be used only onces. Means suppose  if can go JFK ->  RCS & RCS -> JFK. Then you use this
    ticket only once. Otherwise infinite cycle can possible.
    4. Should have Lexicographical order.

    In This Question Choice of Data Structure is Most Important Part
    We will choose :
    1. Multiset : To return answer in lexicographical order.
    2. Unordered_map : To search a key in O(1) Time.
    3. Stack : DFS.

    Time Complexity - O(V + E)
*/

// Solution 1: Iterative Solution
class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        // Build a graph in lexicographical order.
        unordered_map<string, multiset<string>> targets;
        vector<string> route;

        for (auto ticket : tickets)
            targets[ticket[0]].insert(ticket[1]);

        stack<string> s;
        // Fixed Starting Point
        s.push("JFK"); 

        while (!s.empty())
        {
            string src = s.top();

            // if there is no more way, we will pop out, otherwise we will go for its next
            if (targets[src].size() == 0)
            {
                route.push_back(src);
                s.pop();
            }
            else
            {
                string next = *targets[src].begin();
                targets[src].erase(targets[src].begin());
                s.push(next);
            }
        }

        reverse(route.begin(), route.end());
        return route;
    }
};


// Solution 2: Recusrive Solution
class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        for (vector<string> ticket : tickets)
            targets[ticket[0]].insert(ticket[1]);

        visit("JFK");
        return vector<string>(route.rbegin(), route.rend());
    }

    unordered_map<string, multiset<string>> targets;
    vector<string> route;

    void visit(string airport)
    {
        while (targets[airport].size())
        {
            string next = *targets[airport].begin();
            targets[airport].erase(targets[airport].begin());
            visit(next);
        }

        route.push_back(airport);
    }
};