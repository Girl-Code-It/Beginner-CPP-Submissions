#include <iostream>
using namespace std;
int main()
{
    int age1, age2, age3;
    cout << "enter age1,age2,age3" << endl;
    cin >> age1 >> age2 >> age3;
    if (age1 > age2 && age2 > age3)
        cout << "first person is oldest and third person is youngest " << endl;
    else if (age2 > age1 && age1 > age3)
        cout << "second person is oldest and third person is youngest" << endl;
    else if (age3 > age1 && age1 > age2)
        cout << "third person is oldest and second person is youngest" << endl;
    else if (age2 > age3 && age3 > age1)
        cout << "second person is oldest and first person is youngest" << endl;
    else if (age1 > age3 && age3 > age2)
        cout << "first person is oldest and second person is youngest" << endl;
    else
        cout << "third person is oldest and first person is youngest" << endl;
}
