// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end());
        int n = envelopes.size();
        int t[n+1];
        
        for(int i=0;i<n;i++){
            t[i] = 1;
            for(int j=0;j<i;j++){
                if(envelopes[j][0] < envelopes[i][0] &&
                  envelopes[j][1] < envelopes[i][1]){
                    t[i] = max(t[i],1+t[j]);}
                
            }
            cout<<t[i]<<" ";
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,t[i]);
        }
        
        return ans;
    }
};
