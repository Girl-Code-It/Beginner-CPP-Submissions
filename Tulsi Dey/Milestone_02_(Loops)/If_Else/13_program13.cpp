/*
Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and 
then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then 
he may work in anywhere

if employee is male and age is in between 40 t0 60 then 
he will work in urban areas only.

And any other input of age should print "ERROR".


*/
#include <iostream>
using namespace std;

int main()
{
    int age; string sex, mStatus;
    cout<<"Enter your age: "; cin>>age;
    cout<<"Enter your sex ( M or F): "; cin>>sex;
    cout<<"Enter your marital status ( Y or N ): "; cin>>mStatus;

    if(sex == "F") cout<<"You may work in urban areas only";
    else if(sex == "M" && (age >= 20 && age < 40))
    cout<<"You may work in anywhere";
    else if(sex == "M" && (age >= 40 && age < 60))
    cout<<"You may work in urban areas only";
    else cout<<"ERROR!!!";
    
    return 0;
}