#include<iostream>
using namespace std;
int main () {
    int a;
    cout<< "Enter a number."<< endl;
    cin>>a;
    if (a>=0) {
        cout<< a<<endl;
    }
    else {
        cout<< a*-1<<endl;
    }
    return 0;
}
