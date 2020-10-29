// program to take input of age of 3 people by user and determine oldest and youngest among them.
#include<iostream>
using namespace std;
int main()
{
    float age1,age2,age3;
    input:
    cout<<"ENTER THE THREE AGES \n";
    cin>>age1>>age2>>age3;
    if (( age1<0 && age2<0 ) && ( age2<0 && age3<0 ))  // can we use this??
    {
        cout<<"INVALID AGE !!!! \n";
        goto input;
    }

    if (age1>age2&& age1>age3)
        cout<<" THE ELDEST PERSON IS OF AGE\n "<<age1;
         else if (age2>age1&& age2>age3)
        cout<<" THE ELDEST PERSON IS OF AGE \n"<<age2;
     else
        cout<<" THE ELDEST PERSON IS OF AGE \n"<<age3;


    if (age1<age2&& age1<age3)
        cout<<" THE YOUNGEST PERSON IS OF AGE \n"<<age1;
         else if (age2<age1&& age2<age3)
        cout<<" THE YOUNGEST PERSON IS OF AGE \n"<<age2;
     else
        cout<<" THE YOUNGEST PERSON IS OF AGE \n"<<age3;
        return 0;

}
