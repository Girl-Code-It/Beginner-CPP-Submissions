/* A student will not be allowed to sit in exam if his/her attendance is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not. */
#include<iostream>
using namespace std;

int main()
{
    int classes_held, classes_attended, percentage;
    cout<<"no. of classes held";
    cin>>classes_held;
    cout<<"no. of classes attended";
    cin>>classes_attended;
    percentage=classes_attended*100/classes_held;
    cout<<"Percentage of class attended: "<<percentage<<endl;
    if(percentage>75)
        cout<<"Student is allowed to sit in exam.";
    else
        cout<<"Student is not allowed to sit in exam.";
}
