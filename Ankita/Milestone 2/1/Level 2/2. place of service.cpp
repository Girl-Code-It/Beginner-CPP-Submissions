7#include<iostream>
using namespace std;
int main () {
    int age;
    char a, b;
    cout<< "Enter the age"<< endl;
    cin>>age;
    cout<< "Enter sex (M or F)"<< endl;
    cin>>a;
    cout<< " Enter Marital status (Y or N) "<<endl;
    cin>>b;
    if (a=='f' || a=='F') {
        cout<< "Urban area"<< endl;
    }
    else {
        if (age>=20 && age<=40) {
            cout<< "Anywhere"<<endl;
        }
        else if (age>40 && age<=60) {
            cout<< "Urban area"<< endl;
        }
        else {
            cout<< "ERROR"<< endl;
        }
        return 0;
    }
}
