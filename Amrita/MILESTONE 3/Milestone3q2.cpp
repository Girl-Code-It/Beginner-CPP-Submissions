// PROGRAM TO OBTAIN SUM OF FIRST AND LAST DIGIT OF A NUMBER

#include<iostream>
using namespace std;
int main ()
{
    int digit,n;
    cout<<"ENTER THE DIGIT TO OBTAIN FIRST AND LAST DIGIT \n";
    cin>>digit;
    int l_digit=digit%10;
    while (digit>0)
    {
        n=digit%10;
        digit=digit/10;
    }
    int f_digit=n;
    cout<<"SUM OF FIRST AND LAST DIGIT IS :  \t"<<f_digit+l_digit;
    return 0;

}

