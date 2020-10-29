#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int age1, age2, age3;
    int youngest, oldest;


    cout << "Enter the age of Person 1" << endl;
    cin >> age1;

    cout << "Enter the age of Person 2" << endl;
    cin >> age2;

    cout << "Enter the age of Person 3" <<  endl;
    cin >> age3;

    youngest = (age1 < age2)? age1 : age2;
    youngest = (youngest < age3) ? youngest : age3;

    oldest = (age1 > age2)? age1 : age2;
    oldest = (oldest > age3) ? oldest : age3;

    cout << "Oldest " << oldest;
    cout << endl << "Youngest " << youngest;
}

