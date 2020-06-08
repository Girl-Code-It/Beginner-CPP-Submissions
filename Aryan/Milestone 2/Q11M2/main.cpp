#include <iostream>

using namespace std;

int main()
{
    char alp;

    cout<< "Enter a character :\n";
    cin>>alp;

    if(alp>=97 && alp<123)
        cout<<"The letter entered is lowercase\n";
    else if(alp>=65 && alp<91)
        cout<<"The letter entered is uppercase\n";
    else
        cout<<"Invalid character";





    return 0;
}
