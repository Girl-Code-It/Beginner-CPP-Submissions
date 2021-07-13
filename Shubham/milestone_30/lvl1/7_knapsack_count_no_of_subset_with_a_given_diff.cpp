#include<bits/stdc++.h>

using namespace std;

vector<int> subset_sum(int A[], int n, int sum)
{
    int dp[n+1][sum+1];

    //intitialization

    for(int i = 0; i < sum + 1; i++)
        dp[0][i] = 0;

    for(int i = 0; i < n + 1; i++)
        dp[i][0] = 1;

    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < sum + 1; j++)
        {
            if(A[i-1] <= j)
            {
                int included = dp[i-1][j - A[i-1]];
                int excluded = dp[i-1][j];

                dp[i][j] = included + excluded;
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    vector<int> v;

    for(int i = 0; i < (sum + 1)/2; i++)
    {
        for(int j = 0; j < dp[n][i]; j++)
            v.push_back(i);
    }

    return v;
}

int count_no_of_subset_with_given_diff(int A[], int n, int diff)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += A[i];

    vector<int> v = subset_sum(A, n, sum);

    int counter = 0;
    for(int i  = 0; i < v.size(); i++)
    {
        if(sum - (2*v[i]) == diff)
            counter++;
    }
    return counter;
}

int main()
{
    int A[] = {1, 1, 2, 3};
    int n = sizeof(A)/sizeof(A[0]);
    cout << count_no_of_subset_with_given_diff(A, n, 1) << endl;
}