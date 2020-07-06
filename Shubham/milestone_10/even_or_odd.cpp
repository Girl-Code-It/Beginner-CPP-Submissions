#include<cstdlib>
#include<iostream>

using namespace std;

bool isEven(int);

int main()
{
    int num;

    cout << "Enter a number to check even or odd " << endl;
    cin >> num;

    if(isEven(num) == true)  cout << "It's an Even Number" <<endl;
    else                cout << "It's an Odd Number" << endl;
}

bool isEven(int x)
{
    if(x%2 == 0)    return true;
    else    return false;
}
