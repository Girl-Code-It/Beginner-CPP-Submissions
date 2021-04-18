//https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1

int t[201][201];

class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int e, int f) 
    {
        if(f == 1 || f == 0){
            return f;
        }
        if(e == 1){
            return f;
        }
        
        memset(t,-1,sizeof(t));
        
        if(t[e][f] != -1){
            return t[e][f];
        }
        
        int mn = INT_MAX;
        for(int k=1;k<=f;k++){
            int low,high;
            if(t[e-1][k-1] != -1){
                low = t[e-1][k-1];
            }
            else{
                low = eggDrop(e-1,k-1);
                t[e-1][k-1] = low;
            }
            
            if(t[e][f-k] != -1){
                high = t[e][f-k];
            }
            else{
                high = eggDrop(e,f-k);
                t[e][f-k] = high;
            }
            
            int temp = 1 + max(low , high);
            mn = min(temp,mn);
        }
        
        return t[e][f] = mn;
    }
};
