#include <iostream>

using namespace std;

int main()
{
    int q,i=100,tot;

    cout<<"Enter the quantity of items you want\n";

    cin>>q;

    tot=q*i;

    cout<<"The total cost is "<<tot<<endl;

    if(tot>=1000)
        cout<<"You will get a discount of 10%\n";

    else
        cout<<"You will not get any discount\n";

    return 0;


}
