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
    sort(v.begin(), v.end());
    auto it = v.begin();
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    
    return 0;
}

