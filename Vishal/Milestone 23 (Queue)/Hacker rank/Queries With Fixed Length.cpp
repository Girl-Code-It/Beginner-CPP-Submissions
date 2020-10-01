#include <cstdio>
#include <cassert>
#include <deque>

using namespace std;

const int N = 1e5 + 100;

int a[N];
deque<int> dq;

int main() {
    int n, cq;
    scanf(" %d %d", &n, &cq);
    for (int i = 0; i < n; i++)
        scanf(" %d", a + i);

    for (int it = 0; it < cq; it++)
    {
        int d;
        scanf(" %d", &d);
        dq.clear();
        int best = 1 << 29;
        for (int i = 0; i < n; i++)
        {
            while (dq.size() && a[dq.back()] < a[i])
                dq.pop_back();

            dq.push_back(i);

            while (dq.size() && dq.front() <= i - d)
                dq.pop_front();

            if (i >= d - 1)
            {
                assert(dq.size());
                if (best > a[dq.front()])
                {
                    best = a[dq.front()];
                }
            }
        }
        printf("%d\n", best);
    }
    return 0;
}