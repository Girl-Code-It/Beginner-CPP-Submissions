#include <iostream>

using namespace std;

int main()
{
    int num,rnum,x;

    cout<< "Enter a number :\n";
    cin>>num;

    x = num;

    while( num!=0 )
    {
        rnum = rnum + (num%10);

        rnum = rnum*10;

        num = num/10;

    }
        rnum = rnum/10;

        if(rnum == x)
            cout<< "The number is a palindrome\n";
        else
            cout<< "The number is not a palindrome\n";


    return 0;
}
