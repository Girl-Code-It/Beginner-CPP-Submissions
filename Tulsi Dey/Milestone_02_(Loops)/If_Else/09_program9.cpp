/*
A student will not be allowed to sit in exam if his/her attendence 
is less than 75%.

Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical
cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

*/
#include <iostream>
using namespace std;

int main()
{
    double classes, attended;
    bool medical; string s;
    cout<<"Enter total no. of classes held: "; cin>>classes;
    cout<<"Enter total no. of classes attended: "; cin>>attended;
    
    double percent = (100.0)*(attended/classes);
    cout<<"Your attendence percent is: "<<percent<<"%"<<endl;

    if(percent < 75.0) 
    {
        cout<<"Do you have any medical cause? \n 'Yes'-> Y \n 'No'-> N \n";
        cin>>s;
        if(s == "Y") cout<<"You are allowed to sit in exam";
        else cout<<"You are not allowed to sit in exam";
    }
    else cout<<"You are allowed to sit in exam";
    return 0;
}