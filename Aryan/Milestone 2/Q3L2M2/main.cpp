#include <iostream>

using namespace std;

int main()
{
    int x,p,q,r,s,num;
    cout<<"Enter any 4 digit number :\n";
    cin>>x;

    p = x%10;
    q = (x%100)/10;
    r = (x%1000)/100;
    s = x/1000;

    num = p*1000 + q*100 + r*10 + s;

    cout<<"Inversed number is : "<<num<<endl;



    return 0;
}
