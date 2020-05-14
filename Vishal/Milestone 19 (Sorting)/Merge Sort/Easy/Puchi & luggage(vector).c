#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        vector<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            s.push_back(arr[i]);
        }
        int index=0;
        sort(s.begin(),s.end());
        vector<int>::iterator it;
        vector<int>::iterator iter;
        for(int i=0; i<n; i++)
        {
            index=0;
            it=lower_bound(s.begin(),s.end(),arr[i]);
            iter=it;
            index=it-s.begin();
            s.erase(iter);
            cout<<index<<" ";
        }
        cout<<endl;
    }
    return 0;
}