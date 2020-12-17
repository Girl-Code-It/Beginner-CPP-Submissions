#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m;
    int q;
    cin>>q;
    
    int x,z;
    string y;
    
    while(q--){
        cin>>x>>y;
        if(x==1){
            cin>>z;
            m[y] += z;
        }
        if(x==2){
            m.erase(y);
        }
        if(x==3){
            cout<<m[y]<<endl;
        }
    }
    return 0;
}



