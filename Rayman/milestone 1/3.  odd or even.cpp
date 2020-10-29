//Write a program to check whether a number is even or odd

#include<iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Please Enter the number : ";
    cin >> n;

    if (n%2 == 0)
        cout<<n<<" is an even number " <<endl;

    else
        cout<<n<<" is an odd number " <<endl;

    return 0;
}
