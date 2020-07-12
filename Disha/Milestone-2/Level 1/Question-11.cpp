//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z )

using namespace std;
#include<iostream>
int main()
{
    char ch;
    cout<<"\n Enter an alphabet : ";
    cin>>ch;

    if(ch>=97&&ch<=122){
        cout<<"\n Entered character is lowercase \n";
    }
    else if(ch>=67&&ch<=90){
        cout<<"\n Entered character is uppercase \n";
    }
    return 0;
}
