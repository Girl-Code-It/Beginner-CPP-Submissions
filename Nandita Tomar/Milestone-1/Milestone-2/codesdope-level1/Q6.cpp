#include <iostream>
using namespace std;
int main(){
    int age1, age2, age3, oldest, youngest;
    cout << " Enter the age of first person : ";
    cin >> age1;
    cout << "\nEnter the age of second person : ";
    cin >> age2;
    cout << "\nEnter the age of third person : ";
    cin >> age3;
    oldest = (age3 > (age1>age2)) ? age3 : ((age2>age1)? age2 : age1);
    youngest = (age3 < (age1<age2)) ? age3 : ((age2<age1)? age2 : age1);
    cout << "\n The oldest person is : "<< oldest << " years old";
    cout << "\n The youngest person is : "<< youngest << " years old";
    return 0;
}