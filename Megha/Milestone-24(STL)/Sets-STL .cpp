#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q; //number of queries
    cin>>q;
    int x,y;
    
    while(q--){
        cin>>x>>y;
        if(x==1){
            s.insert(y);
        }
        if(x==2){
            s.erase(y);
        }
        if(x==3){
            if(s.find(y) != s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    
    return 0;
}


