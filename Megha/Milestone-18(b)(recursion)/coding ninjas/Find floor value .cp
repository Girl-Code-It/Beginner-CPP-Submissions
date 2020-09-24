#include <iostream>
using namespace std;
int findFloor(int arr[],int n,int x) {
    static int i=0;
    if(i==n)      //suppose if x is 60 then less than 60 will always be last element
        return arr[n-1];
    else
        if(arr[i]>x){
          return arr[i-1];         //we will check if any element of array is greater than x then 
          }                   //we will return position i-1 as we want to print number less than or equal to x
     i++;
   return findFloor(arr,n,x);
}
int main() {
    int n,x,result,i;    
    cin>>n;    //input size of array
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];     //input array
    }
    cin>>x;    //input number which is to be found or it's nearest is to be found
    cout<<findFloor(arr,n,x);
}
