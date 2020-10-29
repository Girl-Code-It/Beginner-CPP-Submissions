/*
8.
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/
#include<iostream>
using namespace std;
int main() {
    float a, b, c;
    cout<< "Enter total number of classes held : "<<endl;
    cin>>a;
    cout<< "Enter total number of classes attended : "<<endl;
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
