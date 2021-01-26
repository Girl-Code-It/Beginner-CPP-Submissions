
//https://practice.geeksforgeeks.org/problems/unique-bsts-1587115621/1

// Functiuon to return number of trees
int m = 1000000007;
// Return the total number of BSTs possible with keys [1....N] inclusive.
int numTrees(int N) {
    // Your code here
    vector<long long int> v(N+1,0);
    v[0] = v[1] = 1;
    for(int i=2;i<=N;i++){
        long long ans = 0;
        for(int j=0;j<i;j++){
            ans += v[j]*v[i-j-1];
            ans = ans%m;
        }
        v[i]=ans;
    }
    
    return v[N];
}
