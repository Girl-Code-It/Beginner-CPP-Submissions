#include<bits/stdc++.h>

using namespace std;

vector<int> subset_sum(int A[], int sum, int n)
{
    bool dp[n+1][sum+1];

    //initialization

    for(int i = 0; i < sum+1; i++)
        dp[0][i] = false;
    
    for(int i = 0; i < n+1; i++)
        dp[i][0] = true;

    
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(A[i-1] <= j)
            {
                bool included = dp[i-1][j - A[i-1]];
                bool excluded = dp[i-1][j];

                dp[i][j] = included or excluded;
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    vector<int> v;

    for(int i = 0; i < (sum + 1)/2; i++)
    {
        if(dp[n][i] == true)
            v.push_back(i);
    }

    return v;
}

int min_subset_sum_difference(int A[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += A[i];

    vector<int> v = subset_sum(A, sum, 4);

    int min_diff = INT_MAX;

    for(int i = 0; i < v.size(); i++)
    {
        int curr_diff = sum - (2*v[i]);
        min_diff = min(min_diff, curr_diff);
    }

    return min_diff;
}

int main()
{
    int A[] = {1, 6, 11, 5};
    cout << min_subset_sum_difference(A, 4) << endl;
}