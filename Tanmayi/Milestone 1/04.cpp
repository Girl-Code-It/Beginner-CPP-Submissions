#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a<0)
    {
        cout<<"Negetive"<<endl;
    }
    else if(a == 0)
    {
        cout<<"Zero"<<endl;
    }
    else
    {
        cout<<"Positive"<<endl;
    }
    return 0;
}