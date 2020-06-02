#include <iostream>
using namespace std;
void check(int age);

int main()
{
    int age;
    cout<<"input your age : ";
    cin>>age;
    check(age);
}
void check(int age)
{
    (age<18)? cout<<"You are not eligible for voting.": cout<<"You are eligible for voting.";
}

