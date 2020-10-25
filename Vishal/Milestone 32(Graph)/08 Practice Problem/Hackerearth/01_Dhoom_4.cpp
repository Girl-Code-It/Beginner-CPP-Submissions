// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/dhoom-4/

// Using BFS
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int key, lockKey, n, x;
    cin >> key >> lockKey >> n;
    vector<int>keyList;
    
    while (n--)
    {
        cin >> x;
        keyList.push_back(x);
    }

    queue<int>q;
    vector<int>count(100001, -1);
    q.push(key);
    count[key] = 0;

    while (!q.empty())
    {
        x = q.front();
        q.pop();

        if(lockKey == x)
        break;

        for (int i = 0; i < keyList.size(); i++)
        {
            int temp = ((long)x * (long)keyList[i]) % 100000;
            if(count[temp] == -1)
            {
                q.push(temp);
                count[temp] = count[x] + 1;
            }
        }
        
    }
    cout << count[lockKey] << "\n";
    return 0;
}