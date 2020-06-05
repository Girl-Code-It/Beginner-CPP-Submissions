#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n,z,time = 0;
    queue<int>call;
    cin >> n;
    int expect[n];

    for(int i = 0; i < n; i++)
    {
        cin >> z;
        call.push(z);
    }

    for(int i=0; i < n; i++)
        cin >> expect[i];

    int i = 0;
    while(! call.empty() && i < n)
    {
        if(call.front() == expect[i])
        {
            call.pop();
            i++ ;
        }

        else
        {
            z = call.front();
            call.pop();
            call.push(z);
        }

        time++;
    }

    cout << time << "\n";
    return 0;
}