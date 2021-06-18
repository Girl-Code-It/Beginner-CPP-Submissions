#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int max = a;
    if(max < b)
    {
        max = b;
    }
    cout<<max<<endl;
    return 0;
}