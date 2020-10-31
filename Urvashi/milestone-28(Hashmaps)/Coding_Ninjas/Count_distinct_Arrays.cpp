#define mod 1000000007
int CountDistinctArrays(int arr[], int n)
{
    unordered_map<int, int> m;
    long count = 1;
    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) == m.end())
            m[arr[i]] = 1;
        else
            m[arr[i]]++;
    }
    for (auto it : m)
    {
        count *= (it.second + 1);
        count %= mod;
    }
    count--;
    return (int)count;
}
// lets take an array 1 2 3 2 here count(1) = 1 , count(2) = 2 , count(3) = 1
// formula is count = (count(1) + 1)*(count(2) + 1)*(count(3) + 1 ) - 1
