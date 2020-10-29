#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

    //attandance program

    int total_classes, attended;
    float required, got;


    cout << "Enter the total classes held in the university" << endl;
    cin >> total_classes;

    cout << "Enter the no of classes you attended" << endl;
    cin >> attended;

    required = total_classes * .75;
    got = (attended * 100 ) / total_classes;

    bool medical_cause;
    cout << "Do you have any medical cause for the same ( 1 or 0)" << endl;
    cin >> medical_cause;


    if(got >= required)
    {
        cout << "Congrats! you got " << got << " percent attendence" << endl;
        cout << "You are eligible to sit in the exam" << endl;
    }
    else if(medical_cause == true)
    {
        cout << "Please submit your medical certificate to office to get eligible to write the exam" << endl;
    }
    else
    {
        cout << "OOps You got " << got << " percent attendence " << endl;
        cout << "You are not eligible to sit in the exam. Better luck next time" << endl;
    }
}

