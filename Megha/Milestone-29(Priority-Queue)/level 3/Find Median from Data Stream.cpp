//https://leetcode.com/problems/find-median-from-data-stream/submissions/

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxh.size() == 0 || num <= maxh.top()){
            maxh.push(num);
        }
        else{
            minh.push(num);
        }
        
        if(maxh.size() > minh.size() + 1){
            minh.push(maxh.top());
            maxh.pop();
        }
        else if(minh.size() > maxh.size()){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        if(maxh.size() == minh.size()){
            return (maxh.top() + minh.top())/2.0;
        }
        else
        return maxh.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
