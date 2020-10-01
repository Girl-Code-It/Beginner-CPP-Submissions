#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n,type,x;
    queue<int>q;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> type;

        switch(type)
        {
        case 1 :
            cin >> x;
            q.push(x);
            break;
        case 2 :
            q.pop();
            break;
        case 3 :
            cout << q.front()<<"\n";
        }
    }
    return 0;
}
