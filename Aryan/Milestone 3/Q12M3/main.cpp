#include <iostream>

using namespace std;

int main()
{
    int num,p;


    cout<<"Enter a number :\n";
    cin>>num;

     p = num;


    while(p>=10)
    {
       p = p/10;

    }
    cout<<"The first digit is "<<p<<endl;
    cout<<"The last digit is "<<num%10<<endl;

    cout<<"The sum is "<<p+(num%10)<<endl;





    return 0;
}
