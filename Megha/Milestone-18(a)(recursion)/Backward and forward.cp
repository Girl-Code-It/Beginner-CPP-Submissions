#include <iostream>
using namespace std;
void printFun(int test){
    if(test<1){
     return;
    }
    else{
        cout<<test<<" ";
        printFun(test-1);
        cout<<test<<" ";
    }
}
int main() {
    int test=3;
    printFun(test);
}
