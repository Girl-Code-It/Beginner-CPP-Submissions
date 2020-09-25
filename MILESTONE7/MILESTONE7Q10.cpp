
// PROGRAM TO CONVERT DECIMAL INTO OCTADECIMAL


#include<iostream>
using namespace std ;


int main()
{

    int decnum,sum=0,octadecimal=0,place=1;

   cout<<"-------PROGRAM TO CONVERT DECIMAL INRO OCTADECIMAL-----\n";
    cout<<"ENTER THE DECIMAL NUMBER \n";
    cin>>decnum;
    int tempnum=decnum;
    while (tempnum>0)
    {
        int rem=tempnum%8;

        octadecimal=(rem*place)+octadecimal;
        place*=10;
        tempnum=tempnum/8;

    }
    cout<<"\n OCTADECIMAL EQUIVALENT OF  "<<decnum<<" IS :"<<octadecimal;
    return 0;
}

