

#include <iostream>
using namespace std;
int FindRotationCount(int A[],int n){
    int low=0,high = n-1,result = -1;
    while(low<=high){
        if(A[low] == A[high])
            return low;       //Case 1
            int mid = (low+high)/2;
            int next = (mid+1)%n , prev = (mid-1+n)%n;
            if(A[mid]<=A[next] && A[mid]<=A[prev]){      //case 2
                return mid;
            }
            else if(A[mid]<=A[high]){
                high = mid-1;
            }
            else if(A[mid]>=A[low]){
            low = mid + 1;
    }
    }
    return result;
}
int main() {
    int A[] = {11,12,15,18,2,5,6,8};
    int count = FindRotationCount(A,11);
    cout<<count;
    }

