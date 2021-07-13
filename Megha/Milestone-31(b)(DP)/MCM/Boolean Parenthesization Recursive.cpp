// https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1

class Solution{
public:
    int countWays(int N, string S){
        int i=0,j=N-1;
        return solve(S,i,j,true);
    }
    int solve(string S,int i,int j,bool isTrue){
        if(i>j){
            return false;
        }
        if(i == j){
            if(isTrue == true){
                return S[i] == 'T';
            }
            else{
                return S[i] == 'F';
            }
        }
        
        int ans = 0;
        
        for(int k=i+1;k<=j-1;k=k+2){
            int lt = solve(S,i,k-1,true);
            int lf = solve(S,i,k-1,false);
            int rt = solve(S,k+1,j,true);
            int rf = solve(S,k+1,j,false);
            
            if(S[k] == '&'){
                if(isTrue == true)
                ans += lt * rt;
                else
                ans += lf*rf + lt*rf + rt*lf;
            }
            else if(S[k] == '|'){
                if(isTrue == true)
                ans += lt * rt + lt*rf + rt*lf;
                else
                ans += lf*rf;
            }
            else if(S[k] == '^'){
                if(isTrue == true)
                ans += lt*rf + rt*lf;
                else
                ans += lf*rf + lt * rt;
            }
        }
        
        return ans;
    }
};
/*
For Input:
5
T^F|F
your output is: 
1
*/
