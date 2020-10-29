#include<iostream>
#include<queue>

using namespace std;

typedef struct
{
    int power;
    int pos;
} spider;

int main()
{
    queue<spider>q;
    queue<spider>temp;

    int n,x,max,flag;
    cin >> n >> x;
    spider t;

    for(int i=1; i<=n; i++)
    {
        spider sp;
        cin >> sp.power;
        sp.pos = i;

        q.push(sp);
    }

    for(int i = 0; i<x; i++)
    {
        max = -1;
        for(int j = 0; j < x; j++)
        {
            if(q.empty())
                break;

            t = q.front();
            temp.push(t);

            if(t.power > max)
                max = t.power;

            q.pop();
        }

        flag = 0;
        for(int j = 0; j < x; j++)
        {
            if(temp.empty())
                break;

            t = temp.front();
            if(t.power == max && flag == 0)
            {
                cout << t.pos << " ";
                flag = 1;
            }
            else
            {
                t.power = ((t.power - 1) < 0) ? 0 : (t.power-1);

                q.push(t);
            }
            temp.pop();
        }
    }
    return 0;
}