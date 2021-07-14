/*Subset Sums
 Given a list(Arr) of N integers, print sums of all subsets in it. 
Output should be printed in increasing order of sums.*/
class Solution
{
public:
    void solve(vector<int> arr, int n,vector<int>& ans,int i,int sum)
    {
        if(i>n-1)
        {
            ans.push_back(sum);
            return;
        }
        solve(arr,n,ans,i+1,sum+arr[i]); //subset with element arr[i]
        solve(arr,n,ans,i+1,sum);       //subset without element arr[i]
        
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> ans;
        solve(arr,n,ans,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
