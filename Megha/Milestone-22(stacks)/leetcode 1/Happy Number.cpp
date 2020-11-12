
//https://leetcode.com/problems/happy-number/submissions/

class Solution {
public: 
    int calculateSum(int n){
        int num = n,sum = 0,r;
        while(num){
            r = num%10;
            sum += r*r;
            num = num/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow = calculateSum(slow);
            fast = calculateSum(calculateSum(fast));
        }
        while(slow!=fast);
        return slow==1?true:false;
    }

};
