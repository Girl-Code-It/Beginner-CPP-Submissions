#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <assert.h>
#include <iostream>

using namespace std;

map<int, int> ok;
map<int, int> ban;

queue<int> q;

int main()
{
    int M, K;
    scanf("%d%d", &M, &K);

    vector<int> x(M + 1), d(M + 1);
    vector<int> status(M + 1, 0); // 0 = neutral, 1 = entrusted, 2 = distrusted

    for (int i = 1; i <= M; i++)
        scanf("%d%d", &x[i], &d[i]);

    int entrusted = 0;
    for (int i = 0; i < K; i++)
    {
        int t, id;
        scanf("%d%d", &t, &id);

        int a = x[id] - d[id], b = x[id] + d[id];

        if (status[id] == 1)
        {
            ok[a]--;
            if (a != b)
                ok[b]--;
            entrusted--;
        }

        else if (status[id] == 2)
        {
            ban[a]--;
            ban[b]--;
        }

        status[id] = (t == 3 ? 0 : t);

        if (t == 1)
        {
            ok[a]++;
            if (a != b)
                ok[b]++;
            entrusted++;
            q.push(id);
        }

        else if (t == 2)
        {
            ban[a]++;
            ban[b]++;
        }

        // get the answer
        int idx = -1;

        while (!q.empty())
        {
            int x = q.front();
            if (status[x] == 1)
            {
                idx = x;
                break;
            }
            q.pop();
        }

        if (idx == -1)
            printf("-1\n");
        else
        {
            int a = x[idx] - d[idx];
            int b = x[idx] + d[idx];

            vector<int> res;

            if (a > 0 && ok[a] == entrusted && ban[a] == 0)
                res.push_back(a);

            if (b > a && ok[b] == entrusted && ban[b] == 0)
                res.push_back(b);
            printf("%d", (int)res.size());

            for (int i = 0; i < res.size(); i++)
            {
                printf(" %d", res[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
