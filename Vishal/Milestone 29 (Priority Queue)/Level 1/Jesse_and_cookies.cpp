int cookies(int k, vector<int>A)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0,n = A.size(); i<n; i++)
        pq.push(A[i]);

    if(pq.top() >= k)
        return 0;

    int count = 0;
    while(pq.top() < k && !pq.empty())
    {
        int x = pq.top();
        pq.pop();

        if(pq.empty())
            break;

        int y = pq.top();
        pq.pop();

        pq.push(x + 2*y);

        count++;
    }

    return pq.empty() ? -1 : count;

}