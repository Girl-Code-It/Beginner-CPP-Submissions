/*  A student will not be allowed to sit in exam if his/her attendance is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/

using namespace std;
#include<iostream>
int main()
{
    int total,attend;
    cout<<"\n Enter the total number of classes held :";
    cin>>total;

    cout<<"\n Enter number of classes attended by the student :";
    cin>>attend;

    float per=(attend*100)/total;
    cout<<"\n Percentage of class attended :"<<per<<"%";
    if(per<75)
    {
        cout<<"\n Poor attendance,You are not eligible to sit in the exam";
    }
    else if(per>=75){
        cout<<"\n Good,You are eligible to sit in the exam \n ";
    }
    return 0;
}
