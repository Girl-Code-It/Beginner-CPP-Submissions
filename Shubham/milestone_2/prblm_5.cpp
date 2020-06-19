#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Please Enter your marks to check your grades\n";
    cin >> marks;

    if(marks < 25)
        grade = 'F';

    else if(marks >= 25 && marks < 45)
        grade = 'E';

    else if(marks >= 45 && marks < 50)
        grade = 'D';

    else if(marks >= 50 && marks < 60)
        grade = 'C';

    else if(marks >= 60 && marks <  80)
        grade = 'B';

    else if(marks >= 80)
        grade = 'A';

    cout << "Congrats You've Got " << grade << " grade in Exam" << endl;
    cout << "Best of Luck !";

}

