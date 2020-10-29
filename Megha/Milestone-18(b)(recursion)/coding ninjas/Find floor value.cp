#include <iostream>
using namespace std;
int findFloor(int arr[],int n,int x) {
    
    if(x<arr[0]){       //suppose if x is 5 then less than 5 will not exist therefor we return -1
        return -1;
    }
    if(arr[n-1]<=x){       //suppose if x is 60 then less than 60 will always be last element
        return (n-1);
    }
    else{
    for(int i=0;i<n;i++){   //we will check if any element of array is greater than x then 
        if(arr[i]>x){          //we will return position i-1 as we want to print number less than or equal to x
            return (i-1);
        }
    }
    }
    return -1;
}
int main() {
    int n,x,result,i;    
    cin>>n;    //input size of array
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];     //input array
    }
    cin>>x;    //input number which is to be found or it's nearest is to be found
    result = findFloor(arr,n,x);
    if(result==-1){
        cout<<"the floor does not exist";
    }
    else{
        cout<<"the floor exist as "<<arr[result]<<" at the index "<<result;
    }
}
