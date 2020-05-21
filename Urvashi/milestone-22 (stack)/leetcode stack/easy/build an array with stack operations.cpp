class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    vector<string>res;
        
        int flag=1,i;
        
        for(i=0;i<target.size();i++){
            if(target[i]==flag){
                res.push_back("Push");
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
                i--;

            }
            flag++;
        }
        return res;    
    }
};
