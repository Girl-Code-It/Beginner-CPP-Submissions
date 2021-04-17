#include <iostream>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int A[n+1];
   for(i=0;i<n;i++)
       cin>>A[i];
   
   long long int sum=0,count=0,sumNeg=A[0];
   for(i=0;i<n;i++){
       if(A[i]>=0){
       sum+=A[i];
       count++;}
   }
   if(sum!=0)
   cout<<sum<<" "<<count;
   else{
       for(i=0;i<n;i++){
           if(sumNeg<A[i]){
               sumNeg=A[i];
           }
          
       }
	    cout<<sumNeg<<" "<<"1";
   }
}

