// PROGRAM TO INPUT LENGTH AND BREADTH OF A RECTANGLE AND CHECK WHETHER IT IS A SQUARE OR NOT

#include<iostream>
using namespace std;
int main()
{
    float len,bdt;
    cout<<"ENTER LENGTH AND BREADTH OF THE RECTANGLE \n";
    cin>>len>>bdt;
    if(len==bdt)
        cout<<"IT IS A SQUARE  ";
    else
        cout<<"IT IS A RECTANGLE ";
    return 0;
}
