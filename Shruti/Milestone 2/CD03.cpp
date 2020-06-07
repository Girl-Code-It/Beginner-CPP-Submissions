#include<iostream>
using namespace std;

int main()
{
    int q;
    cout<<"\n Enter the quantity: ";
    cin>>q;

    if((q*100)>1000)
        cout<<"\n You get a discount. The cost  is: "<<(q*100-(.1*q*100));
    else
        cout<<"\n No discount. The cost is: "<<(q*100);
    return 0;
}


