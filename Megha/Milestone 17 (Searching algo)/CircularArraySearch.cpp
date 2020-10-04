

#include <iostream>
using namespace std;
int CircularArraySearch(int A[], int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(x == A[mid]){        //Case 1: Found x
            return mid;
        }
        if(A[mid] <= A[high]){         //Case 2: right half is sorted
            if(x>A[mid] && x<=A[high]){       //go searching in right half sorted
                low=mid+1;
            }
            else{                 //go searching in left
                high=mid-1;
            }
        }
        else{                     //Case 3: left half is sorted
            if(x<A[mid] && x>=A[low]){ 
                high=mid-1;      //go searching in left half sorted
            }
            else{                 //go searching in right
                low=mid+1;  
            }
        }
    }
    return -1;
}
int main() {
    int A[] = {12,14,18,21,3,6,8,9};
    int x;
    cout<<"Enter a number ";
    cin>>x;
    cout<<endl;
    int index = CircularArraySearch(A,8,x);
    if(index == -1){
        cout<<x<<" not found in the array";
    }
    else{
        cout<<x<<" is found at position "<<index;
    }
}
