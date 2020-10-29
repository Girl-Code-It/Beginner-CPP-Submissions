//c++ program to print
//permutation with duplicates allowed
#include <bits/stdc++.h>
using namespace std;

void subsetSum(int arr[], int l, int h,int sum=0){

    if(l>h){            //if low become to high the print the arring
        
        cout<<sum<<" ";
        
        return;
    }
       subsetSum(arr,l+1,h,sum);          //calling function
        subsetSum(arr,l+1,h,sum+arr[l]);   
       
}
//driver code to test above function
int main() {
    int t,n;
    cin>>t;        //number of test cases
    int arr[100];
    for(int i=0;i<t;i++){  
    cin>>n;          //length of array
    for(int j=0;j<n;j++){
    cin>>arr[j];
    }
    subsetSum(arr,0,n-1);
    cout<<endl;
    }
}
