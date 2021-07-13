#include<bits/stdc++.h>

using namespace std;
//t[n][w];
int t[5][52];

int knapsack(int weight[], int value[], int w, int n)
{
    if(n == 0 or w == 0)
        return 0;
    
    if(t[n][w] != -1)
        return t[n][w];

    if(weight[n-1] <= w)
    {
        int item_included = value[n-1] + knapsack(weight, value, w - weight[n-1], n-1);  //line 1
        int item_excluded = knapsack(weight, value, w, n-1);                            //line 2
        
        return t[n][w] = max(item_included, item_excluded);
    }
    else
        return t[n][w] = knapsack(weight, value, w, n-1);    //line 3
}

int main()
{
    int weight[] = {1, 3, 4, 5};
    int value[] = {1, 4, 5, 7};
    memset(t, -1, sizeof(t));
    cout << knapsack(weight, value, 7, 4) << endl;
}