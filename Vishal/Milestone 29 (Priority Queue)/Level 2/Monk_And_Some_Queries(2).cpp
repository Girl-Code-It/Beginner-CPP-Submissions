#include<iostream>
#include<queue>
using namespace std;


int a[100002] = {0};
int main()
{
    int qu,op,x;
    priority_queue<int>q;
    priority_queue<int,vector<int>,greater<int> >q1;
    scanf("%d",&qu);

    while(qu--)
    {
        scanf("%d",&op);
        if(op == 1)
        {
            scanf("%d",&x);
            a[x]++;
            q.push(x);
            q1.push(x);
        }
        else if(op == 2)
        {
            scanf("%d",&x);
            if(a[x])
                a[x]--;

            else
                printf("-1\n");

        }
        else if(op == 3)
        {
            while(q.size() && a[q.top()] == 0)
                q.pop();

            if(q.size())
                printf("%d\n",q.top());

            else
                printf("-1\n");

        }
        else
        {
            while(q1.size() && a[q1.top()] == 0)
                q1.pop();

            if(q1.size())
                printf("%d\n",q1.top());

            else
                printf("-1\n");

        }
    }
    return 0;
}