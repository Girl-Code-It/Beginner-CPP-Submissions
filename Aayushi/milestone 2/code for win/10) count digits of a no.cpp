#include <iostream>
using namespace std;
int main()
{
    long int num=0, i=0;
    cout<<"enter a number : "<< num;
    cin>> num;
    while (num!=0)
    {
        num=num/10;
        i++;
    }
    cout<<"number of digits in "<<num<<" is : "<<i;
    return 0;
}
