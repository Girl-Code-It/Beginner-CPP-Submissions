class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int A[], int n)
    {
    //Code here
        //brute force approach
    unordered_map<int, int> m; // element : index
    int max_distance = 0;
    for(int i = 0; i < n; i++)
    {
        if(m.find(A[i]) != m.end())
            max_distance = max(max_distance, i - m[A[i]]);
        else
            m.insert({A[i], i});
    }
    return max_distance;
    
    }
};
