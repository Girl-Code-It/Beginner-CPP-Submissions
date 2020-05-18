#include<iostream>
using namespace std;
int main() {
    int l, b;
    cout<< "Enter length of rectangle." <<endl;
    cin>>l;
    cout<< "Enter breadth of rectangle." <<endl;
    cin>>b;
    if (l==b) {
        cout<< "The given rectangle is a square." <<endl;
    }
    else {
        cout<< "The given rectangle is not a square."<<endl;
    }
    return 0;
}
