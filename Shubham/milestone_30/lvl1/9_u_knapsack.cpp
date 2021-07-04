#include <bits/stdc++.h>

using namespace std;

int unbounded_knapsack(int wt[], int val[], int n, int W)
{
    if (W == 0 || n == 0)
        return 0;

    if (wt[n - 1] <= W)
    {
        int included = val[n-1] + unbounded_knapsack(wt, val, n, W - wt[n - 1]);
        int excluded = unbounded_knapsack(wt, val, n - 1, W);

        return max(included, excluded);
    }
    else
        return unbounded_knapsack(wt, val, n - 1, W);
}
int main()
{
    int wt[] = {5, 10, 15};
    int val[] = {10, 30, 20};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout << unbounded_knapsack(wt, val, n, 100) << endl;
}