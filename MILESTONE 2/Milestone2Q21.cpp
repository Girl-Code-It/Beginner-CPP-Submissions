// PROGRAM TO PRINT numS OF A NUMBER


#include<iostream>
using namespace std;
int main()
{
    int num,n=0,i;
    cout<<"ENTER THE NUMBER \n";
    cin>>num;
    while(num>0)
    {

        n++;
        num=num/10;
    }
    cout<<"THE TOTAL NUMBER OF DIGITS IS/ ARE \t"<<n;
    return 0;
}
