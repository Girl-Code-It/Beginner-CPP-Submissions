#include<iostream>
using namespace std;
int main () {
    int a, b=1000;
    cout<< "Enter the number of Quantity." << endl;
    cin>>a;
    if (a*100>b) {
        cout<< "The total cost is "<<a*100-0.1*a*100 <<endl;
    }
    else {
        cout<< "The total cost is "<<a*100 <<endl;
    }
    return 0;

}
