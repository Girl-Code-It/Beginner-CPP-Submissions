// PROGRAM TO INPUT VALUES FROM STUDENT AND STATE WHETHER HE IS ELIGIBLE FOR GIVING THE EXAMS OR NOT

#include<iostream>
using namespace std;
int main()

{

    float classheld,classattend;
    input :
        cout<<"ENTER THE NUMBER OF CLASSES HELD AND THE NUMBER OF CLASSES WHICH YOU ATTENDED \n";
    cin>>classheld>>classattend;
    if (classattend>classheld )
    {
        cout<<"ENTER THE CORRECT VALUE \n";
        goto input;
    }
    float attnperc=(classattend/classheld)*100;
    cout<<"YOUR PERCENTAGE ATTENDANCE IS \n"<<attnperc<<"\n";
    if (attnperc> 75)
        cout<<"YOU ARE ALLOWED TO GIVE THE EXAM \n";
    else
        cout<<"YOU ARE  NOT ALLOWED TO GIVE THE EXAM \n";
    return 0;
}
