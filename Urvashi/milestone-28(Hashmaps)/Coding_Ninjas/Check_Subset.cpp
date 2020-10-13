// https://codezen.codingninjas.com/practice/470/2298/check-subset

bool CheckSubset(int arr1[], int n1, int arr2[], int n2)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n2; i++)
    {
        if (m.find(arr2[i]) == m.end())
            m[arr2[i]] = 1;
        else
            m[arr2[i]]++;
    }

    for (int i = 0; i < n1; i++)
    {
        if (m.find(arr1[i]) != m.end())
            m[arr1[i]]--;
    }

    for (auto i : m)
    {
        if (i.second > 0)
            return false;
    }
    return true;
}
