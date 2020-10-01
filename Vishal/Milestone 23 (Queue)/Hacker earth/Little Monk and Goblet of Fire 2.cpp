#include<iostream>
#include<queue>
using namespace std; 

int main()
{
    int q, t, r,A[5] = {0};
    char type;
    queue <int> q2[5];
    cin >> q;
    for(int i = 0; i < q; ++i)
    {
        cin >> type;
        if(type == 'E')
        {
            cin >> t >> r;

            if(A[t] == 0)
            {
                q2[0].push(t);
                A[t] = 1;
            }

            q2[t].push(r);
        }
        else
        {
            t = q2[0].front();
            r = q2[t].front();
            q2[t].pop();

            if(q2[t].empty())
            {  
                q2[0].pop();
                A[t] = 0;
            }
            cout << t << ' ' << r << endl;
        }
    }
    return 0;
}