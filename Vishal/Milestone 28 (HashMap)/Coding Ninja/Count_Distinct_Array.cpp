#include<unordered_map>

int CountDistinctArrays(int arr[], int n)
{
    if(n <= 1)
        return n;

    unordered_map<int,int>m;
    long count = 0;

    for(int i=0; i<n; i++)
        m[arr[i]]++;

    for(auto itr : m)
    {
        count *= (itr.second + 1);
        count %= 1000000007;
    }

    count--;
    return (int)count;
}
