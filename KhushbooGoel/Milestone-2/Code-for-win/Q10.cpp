#include<iostream>
using namespace std;
int main()
{
    int num , d=0 , r;
    cout << "Enter number: ";
    cin >> num;
    while(num!=0)
    {
        num = num/10;
        d++;
    }
    cout << "No. of digits: " << d;


    return 0;
}
