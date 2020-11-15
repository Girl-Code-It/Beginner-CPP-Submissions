// https://codezen.codingninjas.com/practice/470/2299/minimum-operations

int ReturnMinOperationCount(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    int maxCount = 0;
    for (auto i : m)
    {
        if (maxCount < i.second)
            maxCount = i.second;
    }
    return n - maxCount;
}
