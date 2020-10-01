#include <iostream>

using namespace std;

int main()
{
    int n,dig=0;

    cout<<"Enter a number:\n";
    cin>>n;

    while( n>0 )
    {
        n = n/10;

        dig++;

    }

     cout<< "The number of digits are : " <<dig<<endl;


    return 0;
}
