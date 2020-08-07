#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool cmp(pair<long,int>&a,pair<long,int>&b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first)
        return a.second > b.second;
    else
        return false;
}

int main()
{
    long n,zScore,P,S,C,L;
    int id;
    priority_queue<pair<long,int> >q;
    vector<pair<long,int> >ans;
    unordered_map<int,long>m;
    
    cin >> n;

    while(n--)
    {
        cin >> id >> zScore >> P >> L >> C >> S;
        
        long newScore = 50*P + 5*L + 10*C + 20*S;
        m[id] = newScore;
        
        q.push({newScore -zScore,id});
    }
    n = 5;
    while(n--)
    {
        ans.push_back(q.top());
        q.pop();
    }

    sort(ans.begin(),ans.end(),cmp);

    for(auto itr : ans)
        cout << itr.second << " " <<m[itr.second]<< "\n";
    return 0;
}