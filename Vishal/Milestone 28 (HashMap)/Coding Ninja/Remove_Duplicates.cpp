#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicates(vector<int> input)
{
    unordered_map<int,int>m;
    int n = input.size();

    for(int i=0; i<n; i++)
        m[input[i]]++;

    vector<int>ans;

    for(int i=0; i<n; i++)
    {
        if(m.find(input[i]) != m.end())
        {
            ans.push_back(input[i]);
            m.erase(input[i]);
        }

    }
    return ans;
}