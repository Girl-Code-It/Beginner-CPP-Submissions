#include <iostream>
using namespace std;
void allNum(int n){
    if(n<1){
        return;
    }
    else{
        allNum(n-1);
        cout<<n<<" ";
    }
}
int main() {
    int n=50;
    allNum(n);
}

//output= 1 2 3 to 50
