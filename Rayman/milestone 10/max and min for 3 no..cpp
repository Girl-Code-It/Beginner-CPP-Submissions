#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    if(y>x && y>z)
        return y;
    else if(x>y && x>z)
        return x;
    else
        return z;
}
int min(int x, int y, int z)
{
    if(y<x && y<z)
        return y;
    else if(x<y && x<z)
        return x;
    else
        return z;
}

int main()
{
    int x, y, z;
    cout<<"input first number : ";
    cin>>x;
     cout<<"input second number : ";
    cin>>y;
    cout<<"input second number : ";
    cin>>z;
    cout<<"maximum : "<<max(x, y, z)<<endl;
    cout<<"minimum : "<<min(x, y, z)<<endl;
}

