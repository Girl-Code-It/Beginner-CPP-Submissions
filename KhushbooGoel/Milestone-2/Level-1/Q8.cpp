#include<iostream>
using namespace std;
int main()
{
    float attend , held , percent;
    char med;
    cout << "Enter number of classes held: ";
    cin >> held;
    cout << "Enter number of classes attended: ";
    cin >> attend;
    cout << "Do you have a medical condition(Y/N): ";
    cin >> med;
    percent = (attend/held)*100;
    cout << "Percentage of classes attended: " << percent << endl;
    percent<75 ? (med=='N' ? cout << "Not allowed to sit in exams" : cout << "Allowed to sit in exams." ) : cout << "Allowed to sit in exams.";




    return 0;
}
