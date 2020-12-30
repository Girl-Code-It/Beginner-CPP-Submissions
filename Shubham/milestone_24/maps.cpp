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
    
    map<string, int>m; 
    int Q;
    cin >> Q;
    
    while(Q--)
    {
        int type;
        cin >> type;
        string name;
        int marks;        
        if(type == 1)
        {
            cin >> name;
            cin >> marks;
            m[name] += marks;          
        }
        else if(type == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else
        {
            cin >> name;
            cout << m[name] << endl;
        }
    }
    return 0;
    
    
}




