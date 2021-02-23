/* Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work in anywhere
if employee is male and age is in between 40 to 60 then he will work in urban areas only.
And any other input of age should print "ERROR". */
#include<iostream>
using namespace std;
int main()
{
    int age;
    char sex, marital_status;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter sex: ";
    cin>>sex;
    cout<<"Enter marital status: ";
    cin>>marital_status;
    if(sex=='F')
        cout<<"Employee will work only in urban areas.";
    else if(sex=='M' && age>=20 && age<=40 )
        cout<<"Employee can work anywhere.";
    else if(sex=='M' && age>40 && age<=60 )
        cout<<"Employee will work only in urban areas.";
    else
        cout<<"ERROR.";
}
