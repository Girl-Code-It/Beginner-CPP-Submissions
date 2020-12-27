#include<iostream>
using namespace std;
int main()
{
    int age;
    char sex , stat;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex(M/F): ";
    cin >> sex;
    cout << "Enter marital status(Y/N): ";
    cin >> stat;
    if(sex == 'M')
    {
        if(age >=20 && age <40)
            cout << "Place of service: Either Urban or Rural";
        else if(age >=40 && age <60)
            cout << "Place of service: Urban";
        else
              cout << "ERROR";

    }
    else if(sex == 'F')
    cout << "Place of service: Urban";






    return 0;
}
