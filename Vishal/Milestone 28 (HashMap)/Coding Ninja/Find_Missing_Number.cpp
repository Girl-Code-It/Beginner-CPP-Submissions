#include<unordered_map>

void FindMissingElements(int arr[], int n)
{
    int high = arr[0],low = arr[0];
    unordered_map<int,int>m;

    for(int i=0; i<n; i++)
    {
        if(high < arr[i])
            high = arr[i];

        if(low > arr[i])
            low = arr[i];

        m[arr[i]] = 1;
    }

    for(int i=low; i<=high; i++)
    {
        if(m.find(i) == m.end())
            cout << i << " ";
    }
}