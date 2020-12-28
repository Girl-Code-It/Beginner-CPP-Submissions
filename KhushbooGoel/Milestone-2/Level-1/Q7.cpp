#include<iostream>
using namespace std;
int main ()
{
    float attend , held , percent;
    cout << "Enter number of classes held: ";
    cin >> held;
    cout << "Enter number of classes attended: ";
    cin >> attend;
    percent = (attend/held)*100;
    cout << "Percentage of classes attended: " << percent << endl;
    percent<75 ? cout << "Not allowed to sit in exams" : cout << "Allowed to sit in exams.";


    return 0;
}
