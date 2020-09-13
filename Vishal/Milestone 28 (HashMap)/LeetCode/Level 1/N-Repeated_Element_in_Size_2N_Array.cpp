class Solution
{
public:
    int repeatedNTimes(vector<int>& A)
    {
        unordered_set<int>s;
        int n = A.size();
        
        for(int i=0;i<n;i++)
        {
            if(s.find(A[i]) != s.end())
                return A[i];
            
            s.insert(A[i]);
        }
    }
};