#include <iostream>
using namespace std;
int GetIthBit(int n,int i){
    return n&(1<<i)!=0?1:0;     //to make it 0 we will and or operator
}
int SetIthBit(int n,int i){
    n=n|(1<<i);      //to make it 1 we will use or operator
    return n;
}
int main() {
    int n,i;
    cin>>n,i;
    cout<<GetIthBit(n,i)<<endl;
    cout<<SetIthBit(n,i)<<endl;
    return 0;
}

//input 13 2
//output 15
