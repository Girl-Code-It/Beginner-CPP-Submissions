//Floor value in sorted array
#include<iostream>
#include<conio.h>
using namespace std;
int binarySearch(vector<int> arr, int low,int high, int x) 
{ 
    if (low > high) 
        return -1; 
    if (x >= arr[high]) 
        return arr[high]; 
    int mid = (low + high) / 2; 
    if (arr[mid] == x) 
        return arr[mid]; 
    if (mid > 0 && arr[mid - 1] <= x && x < arr[mid]) 
        return arr[mid - 1];   
    if (x < arr[mid]) 
        return binarySearch(arr, low, mid - 1, x); 
    
    return binarySearch(arr, mid + 1, high, x); 
} 

int findFloor(vector<int> arr, int n, int x) 
{ 
    return binarySearch(arr,0,n-1,x);    
}

        
