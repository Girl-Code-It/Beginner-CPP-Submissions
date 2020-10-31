/*()

Intuition:
We have 26 nodes in the graph.
All "==" equations actually represent the connection in the graph.
The connected nodes should be in the same color/union/set.

Then we check all inequations.
Two inequal nodes should be in the different color/union/set.

Explanation
We can solve this problem by DFS or Union Find.

Firt pass all "==" equations.
Union equal letters together
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
    int uf[26];
    bool equationsPossible(vector<string> &equations)
    {
        for (int i = 0; i < 26; i++)
            uf[i] = i;
        for (string e : equations)
            if (e[1] == '=')
                uf[find(e[0] - 'a')] = find(e[3] - 'a');
        for (string e : equations)
            if (e[1] == '!' && find(e[0] - 'a') == find(e[3] - 'a'))
                return false;
        return true;
    }

    int find(int x)
    {
        if (x != uf[x])
            uf[x] = find(uf[x]);
        return uf[x];
    }
};