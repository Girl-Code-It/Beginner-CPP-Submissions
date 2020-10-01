#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int q,type,x;
    cin >> q;
    vector<int>v;

    while(q--)
    {
        cin >> type;

        if(type == 1)
        {
            cin >> x;
            v.push_back(x);
        }
        else if(type == 2)
        {
            cin >> x;

            auto itr = find(v.begin(),v.end(),x);
            if(itr == v.end())
                cout << "-1\n";
            else
                v.erase(itr);
        }
        else if(type == 3)
        {
            int n = v.size();
            if(n == 0)
                cout << "-1\n";
            else
            {
                int Max = 0;
                for(int i=0; i<n; i++)
                    Max = max(Max,v[i]);

                cout << Max << "\n";
            }
        }
        else
        {
            int n = v.size();
            if(n == 0)
                cout << "-1\n";
            else
            {
                int Min = 10000000;
                for(int i=0; i<n; i++)
                    Min = min(Min,v[i]);

                cout << Min << "\n";
            }
        }
    }
    return 0;
}