#include <iostream>

using namespace std;

int main()
{
    int i=1,n,p;

    cout<<"Enter a number to find multiplication table :\n";
    cin>>n;

    cout<<"Enter where you want the multiplication table till :\n";
    cin>>p;

    while(i<=p)
    {
        cout<<n<< "x" <<i<< "=" <<n*i<<endl;
        i++;

    }




    return 0;
}
