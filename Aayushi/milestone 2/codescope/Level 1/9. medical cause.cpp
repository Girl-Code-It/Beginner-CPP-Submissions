/*
8.
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/
/*
9.
Modify the above question to allow student to sit if
he/she has medical cause. Ask user if he/she has
medical cause or not ( 'Y' or 'N' ) and print
accordingly.
*/
#include<iostream>
using namespace std;
int main ()
{
    float h, a, p;
    char ans;
     cout<<"enter the no. of classes held : ";
     cin>> h;
     cout<<"enter the no. of classes attended : ";
     cin>> a;
     p=(a*100)/h;
     cout<<"percentage of class attended : "<<(a*100)/h<<endl;
     if (p<75)
    {
        cout<<"your attendance is less. Do you have a medical cause ?(Y/N) : ";
        cin>> ans;
        if (ans=='N' || ans=='n')
       cout<<"you are not allowed to sit in exam";
        else if (ans=='Y' || ans=='y')
       cout<<"you are allowed to sit in exam.";
        else
       cout<<"invalid input";
    }
     else
       cout<<"you are allowed to sit in the exam";
   return 0;
}
