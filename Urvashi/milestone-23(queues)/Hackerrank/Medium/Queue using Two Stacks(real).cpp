#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> Front,Rear;
    int Q;
    cin >> Q;
    while(Q--)
    {
        int type, x;
        cin >> type;
        if(type == 1)
        {
            cin >> x;
            Rear.push(x);
        }    
        else 
        {
           if(Front.empty())
           { // move all the elements from "Rear" stack to "Front" stack
               while(!Rear.empty())
               {
                   Front.push(Rear.top());
                   Rear.pop();
               }   
            }    
           if(!Front.empty())
           {
               if(type == 2) Front.pop();
               if(type == 3) cout << Front.top() << endl;
           }  
        }   
    }    
    return 0;
}
