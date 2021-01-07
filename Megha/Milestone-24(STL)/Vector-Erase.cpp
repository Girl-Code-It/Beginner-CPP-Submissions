#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    } 
    int x;
    cin>>x;
    
    v.erase(v.begin() + x -1);  //to erase a particular index
    
    int a,b;
    cin>>a>>b;
    
    v.erase(v.begin() + a -1,v.begin() +  b -1);  //to erase the range of the vector
    
    cout<<v.size()<<" "<<endl;  //to print the size of the vector
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    return 0;
}
