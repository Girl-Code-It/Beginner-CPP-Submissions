/*
A student will not be allowed to sit in exam if his/her attendence 
is less than 75%.

Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

*/
#include <iostream>
using namespace std;

int main()
{
    double classes, attended;
    cout<<"Enter total no. of classes held: "; cin>>classes;
    cout<<"Enter total no. of classes attended: "; cin>>attended;

    double percent = (100.0)*(attended/classes);
    cout<<"Your attendence percent is: "<<percent<<"%"<<endl;

    if(percent < 75.0) cout<<"You are not allowed to sit in exam";
    else cout<<"You are allowed to sit in exam";
    return 0;
}