class MedianFinder
{
public:
    vector<int>v;
    MedianFinder()
    {
        //
    }

    void addNum(int num)
    {
        this->v.push_back(num);
    }

    double findMedian()
    {
        sort(this->v.begin(),this->v.end());
        
        int sz = this->v.size();
        
        if(sz&1)
            return double(this->v[(sz+1)/2 -1]);
        else
            return (this->v[sz/2 -1]+ this->v[sz/2])*0.5;
    }
};