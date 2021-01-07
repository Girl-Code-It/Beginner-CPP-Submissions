// PROGRAM TO CHECK WHETHER A PERSON IS ELIGIBLE TO VOTE OR NOT

#include<iostream>
using namespace std;

void check (int age)
{
    if(age >=18)
        cout<<"YOU ARE ELIGIBLE TO VOTE \n";
    else
        cout<<"YOU CANNOT VOTE \n";
}

int main ()
{
    int age;
    cout<<"ENTER THE AGE OF THE PERSON\n";
    cin>>age;
    check(age);
    return 0;
}
