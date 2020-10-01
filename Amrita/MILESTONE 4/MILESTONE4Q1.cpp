#include<iostream>
#include<cmath>
using namespace std;

int main ()
{

    float num,result=1;
    int power;
    cout << "ENTER THE NUMBER WHOSE EXPONENT YOU WANT TO CALCULATE \n";
    cin>>num;

    cout << "UPTO WHICH  POWER DO YOU WAN TO CALCULATE ???? \n";
    cin>>power;
    for (int i=1; i<=power; i++)
    {
        result*= num;
    }
    cout<< " YOUR ANSWER IS " <<result;
    return 0;


}
