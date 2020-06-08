#include <iostream>

using namespace std;

int main()
{
    int ca,ch;
    float p;
    char m;

    cout<<"Enter the number of classes held :\n";
    cin>>ch;

    cout<<"Enter the number of classes attended :\n";
    cin>>ca;

    p = ca*100.0/ch;

    cout<<"Percentage of classes attended is "<<p<<endl;

    cout<<"Do you have a medical cause?\n'Y' for yes and 'N' for no\n";
    cin>>m;


    if(p>=75)
        cout<<"You are not short of attendance";
    else
    {
        if(m=='y'||m=='Y')

        cout<<"You can sit for the exam!";
    else

        cout<<"You cannot sit for the exam!";
    }

    return 0;
}
