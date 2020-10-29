bool CheckSubset(int arr1[], int n1, int arr2[], int n2)
{
    unordered_map<int,int>m;

    for(int i=0; i<n2; i++)
        m[arr2[i]]++;

    for(int i=0; i<n1; i++)
    {
        if(m.find(arr1[i]) != m.end())
        {
            m[arr1[i]]--;

            if(m[arr1[i]] == 0)
                m.erase(arr1[i]);
        }

        if(m.empty())
            break;
    }

    return m.empty();
}