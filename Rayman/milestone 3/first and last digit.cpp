#include <iostream>
using namespace std;
int main()
{
    long int num=0,i=0 ,fd=0 , ld=0;
    cout<<"enter a number : ";
    cin>> num;
    ld=num%10;     //define ld before entering the loop.
    while (num>10)
    {
        num=num/10;
        i++;
        fd=num;
    }
        cout<<"first digit of the number is : "<<fd<<endl;

    cout<<"last digit of the number is : "<<ld;
    return 0;
}
