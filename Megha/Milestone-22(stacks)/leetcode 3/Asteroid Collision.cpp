
//https://leetcode.com/problems/asteroid-collision/submissions/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> v;
        
        for(int i=0;i<asteroids.size();i++){
            if(s.empty() || asteroids[i]>0){
                s.push(asteroids[i]);
            } 
            else{
       while(true){
                if(s.top() < 0 && asteroids[i]<0){
                     s.push(asteroids[i]);
                    break;
                }
                else if(s.top() == -asteroids[i]){
                    s.pop();
                    break;
                }
                else if(s.top() > -asteroids[i]){
                        break;
                    }
                else{
                    s.pop();
                    if(s.empty()){
                        s.push(asteroids[i]);
                        break;
                    }
                }
                }
            }
            
        }
        
        vector<int> ans;
        if(!s.empty()){
       while(!s.empty()){
           ans.push_back(s.top());
           s.pop();
       }
            for(int i=ans.size()-1;i>=0;i--){
                v.push_back(ans[i]);
               } 
            }
        
        return v;
    }
};
