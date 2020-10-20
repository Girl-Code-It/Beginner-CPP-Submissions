#include <iostream>
using namespace std;
void isPowerOfTwo(int x)
    {
        int count=0;
        while(x>0){
        if(x&1){
            count++;
        }
        x=x>>1;
        }
        cout<<count;
    }
int main() {
    int x,ans;
    cin>>x;
    isPowerOfTwo(x);
}
