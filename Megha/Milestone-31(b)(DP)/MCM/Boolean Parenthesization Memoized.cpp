// https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1

unordered_map<string,int> mp;

class Solution{
public:
    int countWays(int N, string S){
        int i=0,j=N-1;
        mp.clear();
        return solve(S,i,j,true) % 1003;
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
        
        string temp = (to_string(i));
        temp += " " + to_string(j) + " " + to_string(isTrue);
        
        if(mp.find(temp) != mp.end()){
            return mp[temp];
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
        
        return mp[temp] = ans;
    }
};
/*
For Input:
5
T^F|F
your output is: 
1
*/
