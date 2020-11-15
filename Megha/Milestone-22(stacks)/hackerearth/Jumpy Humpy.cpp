#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]<arr[i])
            s.pop();

        if(!s.empty())
            arr1[i] = arr1[s.top()] ^ arr[i];
        else
            arr1[i]=arr[i];
        
        s.push(i);
    }
    int max = arr1[0];
    for(int i=1;i<n;i++){
        if(max<arr1[i]){
            max = arr1[i];
        }
    }
    cout<<max<<endl;
}
