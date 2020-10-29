/*
Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
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
const char* grade(int marks);

int main()
{
    int marks;
    cout<<"input your marks : ";
    cin>>marks;
    cout<<"Grade : "<<grade(marks);
}
const char* grade(int marks)
{
    if(marks<=100 && marks>90)
        return "AA";
    else if(marks<=90 && marks>80)
        return "AB";
    else if(marks<=80 && marks>70)
        return "BB";
    else if(marks<=70 && marks>60)
        return "BC";
    else if(marks<=60 && marks>50)
        return "CD";
    else if(marks<=50 && marks>40)
        return "DD";
    else
        return "fail";
}
