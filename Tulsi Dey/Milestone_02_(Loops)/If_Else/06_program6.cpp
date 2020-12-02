/*
Take input of age of 3 people 
by user and determine oldest and youngest among them.

*/
#include <iostream>
using namespace std;

int main()
{
    int age1, age2, age3;
    cout<<"Enter the ages in newline:"<<endl;
    cin>>age1>>age2>>age3;

    int max = age1 > age2 ? age1 : age2 > age3 ? age2 : age3;
    int min = age1 < age2 ? age1 : age2 < age3 ? age2 : age3;

    cout<<"Oldest age is: "<<max<<endl;
    cout<<"Youngest age is: "<<min;
    return 0;
}