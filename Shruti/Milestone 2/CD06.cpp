#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout<<"\n Enter the age of first person: ";
    cin>>n1;
    cout<<"\n Enter the age of the second person: ";
    cin>>n2;
    cout<<"\n Enter the age of the third person: ";;
    cin>>n3;
    cout<<"\n\n The oldest person is: ";

    if( (n1 > n2) && (n1 > n3) )
        cout<<"first person( "<<n1<<" )";
    else if(n2 > n3)
        cout<<"second person( "<<n2<<" )";
    else
        cout<<"third person( "<<n3<<" )";

    cout<<"\n\n The youngest person is: ";

    if( (n1 < n2) && (n1 < n3) )
        cout<<"first person( "<<n1<<" )";
    else if(n2 < n3)
        cout<<"second person( "<<n2<<" )";
    else
        cout<<"third person( "<<n3<<" )";
}
