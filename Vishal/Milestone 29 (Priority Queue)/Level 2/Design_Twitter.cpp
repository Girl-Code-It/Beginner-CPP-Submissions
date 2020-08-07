class Twitter
{
private:
    unordered_map<int, set<int>> fo;
    unordered_map<int, vector<pair<int, int>>> t;
    long long time;

public:
    Twitter()
    {
        time = 0;
    }
    
    void postTweet(int userId, int tweetId)
    {
        t[userId].push_back({time++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId)
    {
        priority_queue<pair<int, int>> maxHeap;
        
        for (auto it : t[userId])
            maxHeap.push(it);
            
        for (auto it1 : fo[userId])
        {
            for (auto it2 : t[it1]) 
                maxHeap.push(it2);
        }

        vector<int> res;
        while(!maxHeap.empty())
        {
            res.push_back(maxHeap.top().second);
            if (res.size()==10)
                break;
            
            maxHeap.pop();
        }
        
        return res;
    }

    void follow(int followerId, int followeeId)
    {
        if (followerId != followeeId)
            fo[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        fo[followerId].erase(followeeId);
    }
};