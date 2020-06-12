#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q,y,x;
    cin>>q;
    set<int>s;
    while(q--) 
    {
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);  
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else
        {
            (s.find(x)==s.end())?cout<<"No\n":cout<<"Yes\n";
        }
    } 
    return 0;
}
