//Milestone 2

/*5. A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
 int marks;
 cout<<"enter total marks"<<endl;
 cin>>marks;
 cout<<"Your grade is"<<endl;

 if(marks<25)
 cout<<"F";
 
 else if(marks>25&&marks<45)
  cout<<"E";

 else if(marks>45&&marks<50)
 cout<<"D";

 else if(marks>50&&marks<60)
 cout<<"C";

 else if(marks>60&&marks<80)
 cout<<"B";
 
 else if(marks>80)
 cout<<"A";

 getch();
 return 0;
}
