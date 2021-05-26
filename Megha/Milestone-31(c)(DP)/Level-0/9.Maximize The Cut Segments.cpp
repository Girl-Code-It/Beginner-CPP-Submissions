//https://practice.geeksforgeeks.org/problems/cutted-segments1642/1

int maximizeTheCuts(int l, int p, int q, int r)
{
    /*
    int t[n+1];
    int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
    memset(t,-1,sizeof(t));
    
    if(n==0){
        return 0;
    }
    
    if(t[n] != -1){
        return t[n];
    }
    
    if(x<=n){
        op1 = maximizeTheCuts(n-x,x,y,z);
    }
    if(y<=n){
        op2 = maximizeTheCuts(n-y,x,y,z);
    }
    if(z<=n){
        op3 = maximizeTheCuts(n-z,x,y,z);
    }
    
    return t[n] = 1+max(op1,max(op2,op3));
    */
    
    int DP[l+1];
    for(int i = 0 ; i < l+1 ; i++)
        DP[i] = -1;
        
    DP[0] = 0;
    
    for(int i = 0 ; i <= l ; i++)
    {
        if(DP[i] == -1)
            continue;
            
        if(i+p <= l)
            DP[i+p] = max(DP[i+p] , DP[i]+1);
        
        if(i+q <= l)
            DP[i+q] = max(DP[i+q] , DP[i]+1);
            
        if(i+r <= l)
            DP[i+r] = max(DP[i+r] , DP[i]+1);
    }
    return (DP[l]>0)?DP[l]:0;
}
