#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> input)
{
    unordered_map<int, int> m;
    for (int i = 0; i < input.size(); i++)
        m[input[i]]++;
    vector<int> v;
    for (auto i : m)
        v.push_back(i.first);
    sort(v.begin(), v.end());
    return v;
}
