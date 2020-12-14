
//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    queue<ll> q2;
    stack<ll> s;
    
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    
    for(int i=0;i<k;i++){
        q2.push(s.top());
        s.pop();
    }
    
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }
    
    return q2;
}
