
// PROGRAM TO CONVERT DECIMAL INTO BINARY


#include<iostream>
using namespace std ;


int main()
{

    int decnum,sum=0,binary=0,place=1;

   cout<<"-------PROGRAM TO CONVERT DECIMAL INRO BINARY-----\n";
    cout<<"ENTER THE DECIMAL NUMBER \n";
    cin>>decnum;
    int tempnum=decnum;
    while (tempnum>0)
    {
        int rem=tempnum%2;

        binary=(rem*place)+binary;
        place*=10;
        tempnum=tempnum/2;

    }
    cout<<"\n BINARY EQUIVALENT OF  "<<decnum<<" IS :"<<binary;
    return 0;
}
