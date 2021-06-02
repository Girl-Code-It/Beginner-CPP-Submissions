/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/
#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade = '0';
    cout<<"Enter your marks: "; cin>>marks;
    if(marks < 25) grade = 'F';
    
    else if(marks >= 25 && marks <= 45) 
	     grade = 'E';
    else if(marks > 45 && marks <= 50) 
	    grade = 'D';
    else if(marks > 50 && marks <= 60) 
      	grade = 'C';
    else if(marks > 60 && marks <= 80) 
	     grade = 'B';
    else if(marks > 80) 
	     grade = 'A';
    else cout<<"Enter your marks correctly";

    cout<<"Your grade is "<<grade;

    return 0;
}

