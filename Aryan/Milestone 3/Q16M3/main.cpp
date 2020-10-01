#include <iostream>

using namespace std;

int main()
{
    int rnum=0,num,p;

    cout<< "Enter a number to find it's reverse\n";
    cin>>num;

    while(num>0)
    {

        p = num%10;
        rnum = rnum*10 + p;
        num = num/10;

    }

    cout<< "The reverse number is "<<rnum;



    return 0;
}
