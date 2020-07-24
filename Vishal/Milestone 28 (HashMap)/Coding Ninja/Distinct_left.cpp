#include<unordered_map>
#include<queue>
using namespace std;

int FindDistinctCount(int *arr, int n,int k)
{
    unordered_map<int,int>m;

    for(int i=0; i<n; i++)
        m[arr[i]]++;

    priority_queue<pair<int,int> >q;

    for(auto itr : m)
        q.push({itr.first,itr.second});

    //Remove K elements
    while(!q.empty() && k--)
    {
        auto temp = q.top();
        q.pop();
        
        temp.second--;
        
        if(temp.second != 0)
            q.push(temp);
        else
            m.erase(temp.first);
    }
    
    return m.size();
}