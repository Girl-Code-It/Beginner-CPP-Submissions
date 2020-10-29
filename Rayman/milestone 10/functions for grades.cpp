
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
