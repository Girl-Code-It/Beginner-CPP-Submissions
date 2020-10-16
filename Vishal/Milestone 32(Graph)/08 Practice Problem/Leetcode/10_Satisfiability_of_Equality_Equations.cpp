// https://leetcode.com/problems/satisfiability-of-equality-equations/

/*
    Intuition:
    We have 26 nodes in the graph.
    All "==" equations actually represent the connection in the graph.
    The connected nodes should be in the same color/union/set.

    Then we check all inequations.
    Two inequal nodes should be in the different color/union/set.

    Explanation
    We can solve this problem by DFS or Union Find.

    Firt pass all "==" equations.
    Union equal letters together.
    Now we know which letters must equal to the others.

    Second pass all "!=" inequations,
    Check if there are any contradict happens.

    Time Complexity:
    Union Find Operation, amortized O(1)
    First pass all equations, O(N)
    Second pass all inequations, O(N)

    Overall O(N)
*/
class Solution
{
public:
    int disjointSet[26];
    bool equationsPossible(vector<string> &equations)
    {
        // Initialize
        for (int i = 0; i < 26; i++)
            disjointSet[i] = i;
            
        // Union Operation (Color connected components)
        for (string s : equations)
            if (s[1] == '=')
                disjointSet[find(s[0] - 'a')] = find(s[3] - 'a');

        // Check two unequal dont save same color
        for(string s : equations)
            if(s[1] == '!' && find(s[0] - 'a') == find(s[3] - 'a'))
                return false;

        return true;
    }

    int find(int x)
    {
        if(disjointSet[x] == x)
            return x;
        
        return disjointSet[x] = find(disjointSet[x]);
    }
};