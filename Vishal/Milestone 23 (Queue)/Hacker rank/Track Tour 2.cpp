#include<iostream>
#include<queue>
using namespace std;

struct gasStation
{
    int gas;
    int next;
};

int main()
{
    int N;
    cin >> N;
    queue <struct gasStation> route;
    for (int i = 0; i < N; i++)
    {
        struct gasStation st;
        cin >> st.gas >> st.next;
        route.push(st);
    }
    int start = 0, passed = 0,  gas = 0;
    while (passed < N)
    {
        struct gasStation st = route.front();
        gas += st.gas;
        route.pop();

        if (gas >= st.next)
        {
            passed += 1;
            gas -= st.next;
        }
        else
        {
            start += passed + 1;
            passed = 0;
            gas = 0;
        }
        route.push(st);
    }
    cout << start << endl;

    return 0;
}