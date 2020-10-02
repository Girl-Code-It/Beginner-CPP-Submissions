// https://leetcode.com/problems/reconstruct-itinerary/

/*
    How to reach this solution ? 

    Goal(Observation) :
    1. Route will be started at JFK.
    2. If there exist a cycle then, ticket can be used only onces. Means suppose  if can go JFK ->  RCS & RCS -> JFK. Then you use this
    ticket only once. Otherwise infinite cycle can possible.
    3. Use Lexicographical order.
*/

// Solution 1: Recusrive Solution
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

// Solution 2: Iterative Solution
class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        unordered_map<string, multiset<string>> targets;
        vector<string> route;

        for (auto ticket : tickets)
            targets[ticket[0]].insert(ticket[1]);

        stack<string> s;
        s.push("JFK"); // Fixed Starting Point

        while (!s.empty())
        {
            string src = s.top();

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