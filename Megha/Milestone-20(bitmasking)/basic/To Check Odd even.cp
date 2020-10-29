#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n&1){     //if result is 1 then the number is odd 
        cout<<"odd";
    }
    else{         //if result is 0 then the number is even
        cout<<"even";
    }
}
