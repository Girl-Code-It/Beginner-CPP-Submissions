#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(auto i : v)
    {
        cout << v.front() << " ";
        v.erase(v.begin());
    }
    
    return 0;
}