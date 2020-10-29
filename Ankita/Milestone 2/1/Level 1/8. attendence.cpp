#include<iostream>
using namespace std;
int main() {
    float a, b, c;
    cout<< "Enter total number of classes held."<<endl;
    cin>>a;
    cout<< "Enter total number of classes attended."<<endl;
    cin>>b;
    c = b/a*100;

    if (c>75){
        cout<< "Your attendence is "<< c <<endl;
        cout<< "You are allowed to sit in exam."<<endl;
    }
    else {
        cout<< "Your attendence is "<< c << endl;
        cout<< "You are not allowed to sit in exam"<<endl;
    }return 0;
}
