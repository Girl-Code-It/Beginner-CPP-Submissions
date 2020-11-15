#include <iostream>
using namespace std;
int main()
{
    int marks;
    char grade;
    cout << "enter your marks" << endl;
    cin >> marks;
    if (marks < 25)
        cout << "F" << endl;
    else if (marks >= 25 && marks < 45)
        cout << "E" << endl;
    else if (marks >= 45 && marks < 50)
        cout << "D" << endl;
    else if (marks >= 50 && marks < 60)
        cout << "C" << endl;
    else if (marks >= 60 && marks < 80)
        cout << "B" << endl;
    else
        cout << "A" << endl;
}
