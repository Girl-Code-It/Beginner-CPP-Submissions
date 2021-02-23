//https://www.hackerrank.com/challenges/jesse-and-cookies/problem

int cookies(int k, vector<int> A) {
    /*
     * Write your code here.
     */
     priority_queue<int,vector<int>,greater<int>>q;
     int count = 0;
     
     for(int i=0;i<A.size();i++){
         q.push(A[i]);
     }
     
     while(q.size() >= 2){
         if(q.top() >= k){
             return count;
         }
         else{
             int x = q.top(); q.pop();
             int y = q.top(); q.pop();
             q.push(x*1 + y*2);
             count++;
         }
     }
  if(!q.empty() && q.top()>=k){
  return count;}
  else
  return -1;
}
