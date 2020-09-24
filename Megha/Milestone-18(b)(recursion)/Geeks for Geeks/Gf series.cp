#include <bits/stdc++.h>
using namespace std;

long printSeries(long n){
    if(n==0){     //if n is 0 return 0
        return 0;
    }
    if(n==1){     //if n is 1 return 1
        return 1;
    }
    
    return printSeries(n-2)*printSeries(n-2) - printSeries(n-1);
   
}
int main() {
    int t;   //number of test cases
    cin>>t;

    while(t--){
    long n;     //an integer n upto which series will run.
    cin>>n;
    for(long i=0;i<n;i++){     //run loop from 0 to less than n
    cout<<printSeries(i)<<" ";
    }
    cout<<endl;
    }
    return 0;
}

