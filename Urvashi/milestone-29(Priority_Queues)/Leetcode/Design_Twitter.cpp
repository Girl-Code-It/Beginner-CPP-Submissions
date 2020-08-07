class Twitter {
public:
    /** Initialize your data structure here. */
    map<int, unordered_set<int>> following;
    vector<vector<int>> tweets;
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        tweets.push_back({tweetId, userId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be         
	posted by users who the user followed or by the user herself. Tweets must be ordered from most             
	recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> feed;
        int count = 0;
        for(int i=tweets.size()-1; i>=0 && count < 10; i--) {
            if(tweets[i][1] == userId || following[userId].find(tweets[i][1]) != following[userId].end()){
                feed.push_back(tweets[i][0]);
                count++;
            }
        }
        return feed;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
