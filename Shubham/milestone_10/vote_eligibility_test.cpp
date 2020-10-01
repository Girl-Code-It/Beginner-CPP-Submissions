#include<cstdlib>
#include<iostream>

using namespace std;

bool isAdult(int);

int main()
{
    int age;

    cout << "Enter your age to check eligibility for vote" << endl;
    cin >> age;

    if(isAdult(age) == true)  cout << "Congrats ! You are Eligible to Vote :)";
    else    cout << "It's your time to see Pogo kiddo :)"; 
}

bool isAdult(int age)
{
    if(age >= 18)   
        return true;
    else
        return false;
}
