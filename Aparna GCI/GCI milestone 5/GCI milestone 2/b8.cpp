#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int ch,ca;
    float p;
    cout<<"Enter total no. of classes held"<<endl;
    cin>>ch;
    cout<<"Enter no. of classes attended"<<endl;
    cin>>ca;
    p=(ca/ch)*100;
    if(p>75)
        cout<<"Allowed to sit in exam"<<endl;
    else
        cout<<"Not allowed to sit in exams"<<endl;
    return 0;

}
