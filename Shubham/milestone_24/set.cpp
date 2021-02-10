#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin >> Q;
    set<int>s;
    while(Q--)
    {
        int type, x;
        cin >> type >> x;
        
        if(type == 1)
            s.insert(x);
        else if(type == 2)
            s.erase(x);
            
        else
        {
            auto it = s.find(x);
            if(it == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;

        }
    }
    
    return 0;
}




