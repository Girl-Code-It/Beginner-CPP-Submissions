#include<cstdlib>
#include<iostream>

using namespace std;

void grade(int);

int main()
{
    int marks;

    cout << "Enter your marks out of 100" << endl;
    cin >> marks;
    cout << "Your grades are" <<endl;
    grade(marks);
}

void grade(int marks)
{
    if(marks >= 91 && marks<= 100)
        cout << "AA" << endl;
    else if(marks >= 81 && marks <= 90)
        cout << "AB" << endl;
    else if(marks >= 71 && marks <= 80)
        cout << "BB" <<endl;
    else if(marks >= 61 && marks <= 70)
        cout << "BC" << endl;
    else if(marks >= 51 && marks <= 60)
        cout << "CD" << endl;
    else if(marks >= 41 && marks <= 50)
        cout << "DD" << endl;
    else if(marks <= 40)
        cout << "Failed :(" << endl;
    else
        cout << "Please enter a valid input " << endl;
}
