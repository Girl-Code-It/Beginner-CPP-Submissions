#include <iostream>

using namespace std;

int main()
{
    int i=0,n,p=0;

    cout<<"Enter a number :\n";
    cin>>n;


    while(i<=n)
    {
       p = p + i;

       i = i + 2;

    }

    cout<<"The sum is :"<<p<<endl;




    return 0;
}
