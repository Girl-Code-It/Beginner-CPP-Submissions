#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,q;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    
    cin>>q;
    while(q--){
        cin>>x;
    int ind = lower_bound(arr,arr+n,x) - arr;
    if(ind >= 0 && x==arr[ind]){
        cout<<"Yes "<<ind+1<<endl;
    }
    else{
        int ind1 = upper_bound(arr,arr+n,x) - arr;
        cout<<"No "<<ind1+1<<endl;
    }
    }
    return 0;
}
