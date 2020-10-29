#include<iostream>
using namespace std;
int main () {
    int a, b;
    cout<< "Enter Salary."<<endl;
    cin>>a;
    cout<< "Enter year of service."<< endl;
    cin>>b;
    if (b>5) {
        cout<< "NET BONUS IS "<<0.05*a<<endl;
    }
    else {
        cout<< "NO BONUS."<<endl;
    }
    return 0;
}
