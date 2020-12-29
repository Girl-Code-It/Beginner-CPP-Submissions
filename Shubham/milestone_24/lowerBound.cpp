#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }  
    int q;
    cin >> q;
    
    while(q--)
    {
        int val;
        cin >> val;
        int x = lower_bound(v.begin(), v.end(), val) - v.begin();
        
        if(v[x] == val)
            cout << "Yes " << x+1 << endl;
        else
            cout << "No " << x+1 << endl;        
    }
    return 0;
}

