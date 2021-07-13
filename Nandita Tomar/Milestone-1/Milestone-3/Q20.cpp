#include <iostream>
using namespace std;
int main(){

    int i;
    for(i=0; i<=255; i++){
        cout << "\nASCII value of character "<< char(i)<< " is "<< i;
    }
    return 0;
}