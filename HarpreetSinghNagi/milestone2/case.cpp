//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

#include<iostream>

using namespace std;

int main()
{

char a;

cout<<"Enter any character ";
cin>>a;

if(a>=97 && a<=122)
{
cout<<"The entered input is in lower case";
}

else if (a>=65  &&  a<=90)
{
cout<<"The entered input is in upper case";
}

else
{
cout<<"YOou entered a wrong akshar";
}
return 0;

}
