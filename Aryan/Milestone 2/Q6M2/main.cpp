#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 3 ages :\n";
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
            cout<<"The greatest age is "<<a;
        else
            cout<<"The greatest age is "<<c;
    }

    else
        {
            if(b>c)
                cout<<"The greatest age is "<<b;

            else
                cout<<"The greatest age is "<<c;


        }


    return 0;
}

