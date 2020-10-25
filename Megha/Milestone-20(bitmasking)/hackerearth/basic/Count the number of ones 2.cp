#include <iostream>
using namespace std;
void isPowerOfTwo(int x)
    {
        int count=0;
        while(x>0){
         x=x&(x-1);
            count++;
        }
        cout<<count;
    }
int main() {
    int x,ans;
    cin>>x;
    isPowerOfTwo(x);
}
