#include<iostream>
#include<set>
using namespace std;

int main()
{
    int q,y,x;
    set<int> s;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> y >> x;

        if(y == 1)
        {
            s.insert(x);
        }
        else if(y == 2)
        {
            s.erase(x);
        }
        else
        {
            if(s.find(x) != s.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}