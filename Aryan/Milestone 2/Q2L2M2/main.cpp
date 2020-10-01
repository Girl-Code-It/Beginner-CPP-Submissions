#include <iostream>

using namespace std;

int main()
{
    int age;
    char gen,mar;

    cout<<"Enter your details\n";

    cout<<"Enter age :\n";
    cin>>age;

    cout<<"Enter gender 'm' for male and 'f' for female :\n";
    cin>>gen;

    cout<<"Enter marital status 'y' for yes and 'n' for no :\n";
    cin>>mar;

    if(gen=='f' && age>20 && age<60)
        cout<<"You will work only in urban areas\n";

    else if(gen=='m' && age>=20 && age<=40)
        cout<<"You can work anywhere\n";

     else if(gen=='m' && age>40 && age<=60)
            cout<<"You will work in urban areas only\n";
     else
        cout<<"ERROR\n";



    return 0;
}
