class RecentCounter {
private:
    int count;
    queue<int> q1;
    queue<int> q2;
public:
    RecentCounter() {
        count = 0;
    }
    
    int ping(int t) {  
        q1.push(t);
        count = 0;
        int ans = t - 3000;
        
        while(!q1.empty()){
            
            if(q1.front() >= ans && q1.front() <= t){
                count++;
                cout<<count<<" ";
            }
            q2.push(q1.front());
            q1.pop();
        }
        
        
        while(!q2.empty()){
            
            q1.push(q2.front());
            q2.pop();
        }
        
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
