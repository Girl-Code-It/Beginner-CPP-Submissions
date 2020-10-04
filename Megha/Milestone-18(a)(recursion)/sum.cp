#include <iostream>
using namespace std;
int allNum(int n){
    if(n<1){
        return 0;
    }
    else{
        return (n+allNum(n-1));
    }
}
int main() {
    int n=5;
    cout<<allNum(5);
}

//output=15
