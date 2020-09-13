#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxDistance(vector<int> input)
{
    //store first occurance
    unordered_map<int,int>m;
    int n = input.size(),ans = 0;

    for(int i=0; i<n; i++)
    {
        if(m.find(input[i]) == m.end())
            m[input[i]] = i;
        else
            ans = max(ans,i - m[input[i]]);
    }

    return ans;
}