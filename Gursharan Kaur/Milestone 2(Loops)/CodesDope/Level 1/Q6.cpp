/* Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include<iostream>
using namespace std;

int main()
{
    int age1, age2, age3;
    printf("Enter ages. ");
    cin>>age1>>age2>>age3;

    //finding the oldest one
    if(age1 > age2 && age1 > age3)
    {
        cout<<"The biggest age is: "<<age1<<endl;
    }
    else if(age2 > age1 && age2 > age3)
    {
        cout<<"The biggest age is: "<<age2<<endl;
    }
    else if(age3 > age1 && age3 > age2)
    {
        cout<<"The biggest age is: "<<age3<<endl;
    }

    //finding the youngest one
    if(age1 < age2 && age1 < age3)
    {
        cout<<"The lesser age is: "<<age1;
    }
    else if(age2 < age1 && age2 < age3)
    {
        cout<<"The lesser age is: "<<age2;
    }
    else if(age3 < age1 && age3 < age2)
    {
        cout<<"The lesser age is: "<<age3;
    }
    return 0;
}
