
//https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/submissions/

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
       
        int count=0;
        for(int i=0;i<startTime.size();i++){
            if(queryTime>=startTime[i] && queryTime<=endTime[i]){
                count++;
            }
            
        }
        
        return count;
    }
};
