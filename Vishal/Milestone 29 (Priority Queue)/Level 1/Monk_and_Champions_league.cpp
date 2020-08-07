#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int arr[m];
    priority_queue<int>q;

    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
        q.push(arr[i]);
    }

    int ans = 0;
    while(n--)
    {
        int x = q.top();
        q.pop();

        ans += x;
        q.push(x-1);
    }

    cout << ans;
    return 0;
}