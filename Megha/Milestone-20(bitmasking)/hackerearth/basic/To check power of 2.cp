#include <iostream>
using namespace std;
bool isPowerOfTwo(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x & (x - 1));
    }
int main() {
    int x,ans;
    cin>>x;
    ans=isPowerOfTwo(x);
    if(ans==0){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
