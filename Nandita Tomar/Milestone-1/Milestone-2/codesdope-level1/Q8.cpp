#include <iostream>
using namespace std;
int main(){
    float held, attended, percentage;
    cout<< "Enter the total number of classes held : ";
    cin >> held;
    cout <<"Enter the number of classes attended by the student : ";
    cin >> attended;
    percentage = (attended/held)*100;
    cout<<"The percentage of classes attended : "<< percentage<< "%";
    if(percentage>75)
            cout<< "\nStudent is allowed to sit in exam.";
    else
            cout<<"\nStudent is not allowed to sit in exam."; 
    return 0;               
}