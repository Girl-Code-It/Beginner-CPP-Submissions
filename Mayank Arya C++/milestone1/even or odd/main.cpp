#include <iostream>

using namespace std;

int main(){
    int a;

    cout<< "Enter any number"<<endl;
    cin >> a;

    if(a%2==0){
        cout<< a <<" is an even number";
    }
    else{
        cout<< a << " is an odd number";
    }

return 0;
}
