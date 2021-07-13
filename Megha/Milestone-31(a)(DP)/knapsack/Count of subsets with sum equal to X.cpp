/*
This problem is solved using dp.
In this problem we have to count whether the values of subset of array is equal to sum or not.
if equal then we will return true else we will return false.
*/
#include <iostream>
using namespace std;

// This function is for checking whther the subset of array sum is equal to value or not
int subsetSum(int arr[], int sum, int n){
    // We will create matrix t of size (n+1)*(sum+1)
    int t[n+1][sum+1];

    /* if j is 0 i.e. sum is 0 and i i.e. arr has whatever values it will always return true
    because if sum is 0 then we don't need to find if subset of array is equal to sum or not */
    for(int i=0;i<=n;i++){
        t[i][0] = 1;
    }

    /* But if i is 0 i.e array has no value and sum has some value then we can nver make 
    subset of array value equal to sum so it will always give false */
    for(int j=0;j<=sum;j++){
        t[0][j] = 0;
    }

    t[0][0] = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            // if subset sum value grater than sum then we will proceed further
            if(arr[i-1] > j){
                t[i][j] = t[i-1][j];
            }
            // if subset sum value less than sum then we will proceed further and we add value to it
            else{
                t[i][j] =  t[i-1][j] + t[i-1][j-arr[i-1]];
            }
        }
    }
    return t[n][sum];
}

// driver code
int main() {
    // n is size of array 
    int n,sum;
    cin>>n>>sum;
    int arr[n+1];

    // input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    /* by recalling function we will check if function return true we will print Yes 
    else we will print No */
    cout<<subsetSum(arr,sum,n);
    return 0;
}
/*
Input - 
5 11
2 3 7 8 10
Output - 
Yes
Time Complexity - O(sum*n);
Space Complexity - O(sum*n);
*/
