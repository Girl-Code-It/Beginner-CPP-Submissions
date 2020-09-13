#include<unordered_map>
using namespace std;

int CountExtraElements(int arr[], int n)
{
    unordered_map<int,int> m;

    for(int i=0; i<n; i++)
        m[arr[i]]++;

    int ans = 0;

    for(int i=0; i<n; i++)
    {
        if(m.find(arr[i]) != m.end())
        {
            ans += (m[arr[i]] - 1);
            m.erase(arr[i]);
        }
    }
    return ans;
}