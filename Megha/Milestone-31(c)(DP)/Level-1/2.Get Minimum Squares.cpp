//https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1

class Solution{
	public:
	int MinSquares(int n)
	{
	    int t[n+1];
	    int sq = (int)sqrt(n);
	    
	    if(sq*sq == n){
	        return 1;
	    }
	    
	    t[0] = 0;
	    t[1] = 1;
	    for(int i=2;i<=n;i++){
	        t[i] = n;
	        for(int j=1;j*j<=i;j++){
	            t[i] = min(t[i],t[i-j*j]+1);
	        }
	    }
	    
	    return t[n];
	}
};
