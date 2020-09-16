// PROGRAM TO PRINT MULTIPLICATION OF A NUMBER


#include<iostream>
using namespace std;
int main()
{

    int i,n,prod=1;
    cout<<"ENTER THE NUMBER WHOSE MULTIPLES YOU WANT TO OBTAIN \n";
    cin>>n;
    cout<<"UPTO WHICH NUMBER DO YOU WANT THE MULTIPLE \n";
    cin>>i;
    cout<<" THE MULTIPLES ARE AS FOLLOWS \n";
    for (i=1;i<=n;i++)
        {
            prod=n*i;
        cout<<prod<<endl;

       }
       return 0;
}
