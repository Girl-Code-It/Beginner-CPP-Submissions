#include <iostream>
using namespace std;
int main(){
    int age;
    char sex, MaritalStatus;

    cout << "Enter age : ";
    cin >> age;
    cout << "\nEnter sex , M or F : ";
    cin >> sex;
    cout << "\nEnter Marital Status , Y or N : ";
    cin >> MaritalStatus;

    if(sex == 'F'){
        cout << "\nThe employee will only work in urban areas.";
    }
    else if(sex == 'M'){
        if(age >= 20 && age <= 40){
            cout << "\nThe employee can work anywhere.";
        }
        else if(age > 40 && age <= 60){
            cout << "\nThe employee will work in urban areas only.";
        }
        else{
            cout << "ERROR";
        }
    }
    else{
        cout << "\nEnter M or F";
    }
    return 0;
}