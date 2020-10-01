class MedianFinder
{
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int> >minHeap;
public:
    void addNum(int num)
    {
        if(maxHeap.empty() || num < maxHeap.top())
            maxHeap.push(num);
        else
            minHeap.push(num);

        int minSize = minHeap.size(),maxSize = maxHeap.size();
        //For balancing
        if(maxSize > minSize + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        if(minSize > maxSize + 1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian()
    {
        int minSize = minHeap.size(),maxSize = maxHeap.size();

        if(maxSize == minSize)
            return (maxHeap.top() + minHeap.top())*0.5;

        if(maxSize > minSize)
            return maxHeap.top();
        else
            return minHeap.top();
    }
};