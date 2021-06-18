/*
Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will 
display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail

*/
#include <iostream>
using namespace std;
 
string getGrade(int a)
{
    if(a >= 91 && a<= 100) return "AA";
    else if(a >= 81 && a<= 90) return "AB";
    else if(a >= 71 && a<= 80) return "BB";
    else if(a >= 61 && a<= 70) return "BC";
    else if(a >= 51 && a<= 60) return "CD";
    else if(a >= 41 && a<= 50) return "DD";
    else if(a <= 40) return "Fail";
}
int main()
{
    int a;
    cout<<"Enter the number: "; cin>>a;

    cout<<"Your grade is "<<getGrade(a);
    return 0;
}