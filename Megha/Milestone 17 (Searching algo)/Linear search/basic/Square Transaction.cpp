
#include <iostream>
using namespace std;
int main() {
   int T;        //number of transactions
   cin>>T;
   int A[T+1];   //array of transactions
   for(int i=0;i<T;i++){
       cin>>A[i];
   }
   int Q;        // number of queries
   cin>>Q;

   while(Q--){            //till when Q is not equal to zero
    int target;            //this is the daily target that we have to achieve
    cin>>target;
    long int sum=0;
    for(long int i=0;i<T;i++){
        sum = sum + A[i];     //as we have to see that we have achieved daily target or not so we will add all the transactions
        if(sum>=target){             //if sum of transaction will become equal to or greater than target then we achieved the target
            cout<<i+1<<endl;
            break;
        }
        if(i==T-1)             //As i become equal to T-1 and the sum is still less than the target the print -1
            cout<<"-1"<<endl;
        
    }
   }
   return 0;
}
