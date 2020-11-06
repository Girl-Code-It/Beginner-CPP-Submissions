int FindMaximumEqualCount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    // sum[] is to store sum at each point of traversal
    int maxSum = 0, sum[n], cur_rem;
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        // if sum is multiple of k then only we can distribute equal toys to k children
        cur_rem = sum[i] % k;

        if (cur_rem == 0)
        {
            if (maxSum < sum[i])
            {
                maxSum = sum[i];
            }
        }
        // if current rem is not stored in map then store it with index of its first occ
        else if (m.find(cur_rem) == m.end())
        {
            m[cur_rem] = i;
        }
        else if (maxSum < (sum[i] - sum[m[cur_rem]]))
            maxSum = sum[i] - sum[m[cur_rem]];
    }
    // max number of equal chocolates to be distributed among k students
    return maxSum / k;
}
