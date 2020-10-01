#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x,q,y,res;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> y;

        res = lower_bound(v.begin(),v.end(),y) - v.begin();

        if(v[res] == y)
        {
            cout << "Yes " << res+1 << "\n";
        }
        else
        {
            cout << "No " << res+1 << "\n";
        }
        
    }

    return 0;
}